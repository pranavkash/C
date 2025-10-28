#include<stdio.h>

int main(){

    int matrix[4][4]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};

    printf("Diagonals of the matrix:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j || (i+j)==(4-1))
            printf("%d ",matrix[i][j]);
            else
            printf(" ");
        }
        printf("\n");
    }
}