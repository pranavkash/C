//A46 - WAP to implement fragments using Array of Pointers

/*
arr =  [0]{1,2,3,4,avg}
        [1]{3,45,6,3,avg}
        [last]{size(arr[0]),size(arr[1])}

*/
#include<stdio.h>
#include<stdlib.h>

void fragments(float **arr, int rows);

void print(float **arr, int rows);

int main () {
    int rows;
    printf("Enter no.of rows : ");
    scanf("%d",&rows);
    float *arr[rows+1];
    //array to store the size of rows (cols of each row). this is the last row itself.
    float colsize[rows];
    arr[rows] = colsize;
    
    //dma for colums
    for(int i=0;i<rows;i++){
        printf("Enter no of columns in row[%d] : ",i);
        int col;
        scanf("%d",&col);
        arr[i]=(float*) calloc(col+1,sizeof(float));
        // storing col size in last row.
        arr[rows][i]=col+1;    
    }

    //reading of elements from user.
    for(int i=0;i<rows;i++){
        printf("Enter %d values for row[%d] : ",(int)arr[rows][i]-1,i);
        for(int j=0;j<arr[rows][i]-1;j++){
            scanf("%f",&arr[i][j]);
        }
    }

    printf("Before sorting output is:\n");
    print(arr,rows);
    fragments(arr,rows);
}

void print(float **arr, int rows){
    for(int i=0;i<rows;i++){
        int j;
        for(j=0;j<arr[rows][i]-1;j++){
            printf("%d ",(int)arr[i][j]);
        }
        printf("avg=%f ",arr[i][j]);
        printf("\n");
    }
}

void fragments(float **arr, int rows){
    for(int i=0;i<rows;i++){
        int sum = 0;
        //calculate average of each array.
        for(int j=0;j<arr[rows][i]-1;j++){
            sum += arr[i][j];
        }
        int size = arr[rows][i];
        // assigning the array average as the last element of the array.
        arr[i][size-1]= sum/(float)(size-1);
        printf("avg of ith,%d with size %d = %f\n",i,size-1,arr[i][size-1]);
    }

    //sorting array with its average. and also swap the sizes of array which is in the last array.
    int j_size,j1_size;
    for(int i=0; i<rows;i++){
        for(int j=0;j<rows-i-1;j++){// i-1 bcz we will be comparing with j and j+1;
            j_size = arr[rows][j];
            j1_size = arr[rows][j+1];
            if(arr[j][j_size-1]>arr[j+1][j1_size-1]){//size-1 bcz last element is avg.
                //swapping elements
                int temp_element = arr[j][j_size-1];
                arr[j][j_size-1] = arr[j+1][j1_size-1];
                arr[j+1][j1_size-1] = temp_element;
                //swapping the size of respective arrays in the last array.
                int temp_size = j_size;
                j_size = j1_size;
                j1_size = temp_size;
                arr[rows][j] = j_size;
                arr[rows][j+1] = j1_size;
            }
        }
    }

    printf("After sorting output is:\n");
    print(arr,rows);
}