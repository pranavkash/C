//A46 - WAP to implement fragments using Array of Pointers

#include<stdio.h>
#include<stdlib.h>

void fragments(int **arr, int rows);

void print(int **arr, int rows);

int main () {
    int rows;
    printf("Enter no.of rows : ");
    scanf("%d",&rows);
    int *arr[rows+1];
    //array to store the size of rows (cols of each row). this is the last row itself.
    int colsize[rows];
    arr[rows] = colsize;
    
    //dma for colums
    for(int i=0;i<rows;i++){
        printf("Enter no of columns in row[%d] : ",i);
        int col;
        scanf("%d",&col);
        arr[i]= calloc(col+1,sizeof(float));
        // storing col size in last row.
        arr[rows][i]=col+1;    
    }

    //reading of elements from user.
    for(int i=0;i<rows;i++){
        printf("Enter %d values for row[%d] : ",arr[rows][i]-1,i);
        for(int j=0;j<arr[rows][i]-1;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Before sorting output is:\n");
    print(arr,rows);
}

void print(int **arr, int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<arr[rows][i]-1;j++){
            printf("%f ",(float) arr[i][j]);
        }
        printf("\n");
    }
}

void fragments(int **arr, int rows){
    for(int i=0;i<rows;i++){
        int sum = 0;
        for(int j=0;j<arr[rows][i]-1;j++){
            sum += arr[i][j];
        }
        int size = arr[rows][i];
        arr[i][size-1]= sum/size;
        //TODO , complete this
    }
}