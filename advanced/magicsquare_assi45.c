
//A45 - WAP to generate a n*n magic square

// steps to generate numbers.
//start first number in first row mid column
//next num in prev row next col in rotational maner. ie if it is first row back to last row.
//col is last col then back to 1st col.
// if data already exits, next no should be below the last added number.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int order ,sum;
    printf("enter the order of the matrix");
    scanf("%d",&order);
    
    if(!(order%2)){
        printf("Error : Please enter only positive odd numbers\n");
        return 0;
    }
    //array of pointers
    //int *square[order];

    //dma array of pointers
    int **square = malloc(order*sizeof(int*));
    // dynamic memory allocation.
    for(int i=0;i<order;i++){
        square[i]= (int*)calloc(order,sizeof(int));
    }

    //number generation
    int row=0,col,prev_row, prev_col,number=1;
    col=(order/2);// mid col
    square[row][col]=number;//first number at mid col, 1st row.
    number++;
    for(int i=1; i<order*order; i++){
        prev_row=row;
        prev_col=col;
        row = --row<0 ? order-1:row;
        col = (++col>order-1) ? 0:col;
        //printf("row %d,col %d num=%d\n",row,col,number);
        check:
        if(square[row][col]){
            row=prev_row+1;
            col=prev_col;
            goto check;
            square[row][col]=number;
            //printf("prev -- row %d,col %d num=%d\n",row,col,number);
        }else{
            square[row][col]=number;
        }
        number++;

    }




    //printing the matrix.
    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++)
        printf("%d\t",square[i][j]);
        printf("\n");
    }

    //freeing memory
    for(int i=0;i<order;i++){
        free(square[i]);
    }

    free(square);

}

 