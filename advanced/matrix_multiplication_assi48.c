//
//A48 - WAP to find the product of given matrix.

#include <stdio.h>
#include <stdlib.h>

int matrix_mul(int **, int, int, int **, int, int, int **, int, int);

int allocate_matrix_mem(int **,int,int);

int read_matrix(int **,int,int);

int print_matrix(int **,int,int);

int freeup_matrix_mem(int **,int,int);

int main () {
    int **mat_a, **mat_b, **result;

    int rowsa,cola,rowsb,colb;
    
    printf("Enter number of rows of matrix a :");
    scanf("%d",&rowsa);
    printf("Enter number of columns of matrix a :");
    scanf("%d",&cola);
    allocate_matrix_mem(mat_a,rowsa,cola);
    //todo read mata
    read_matrix(mat_a,rowsa,cola);
    
    printf("Enter number of rows of matrix b :");
    scanf("%d",&rowsb);
    printf("Enter number of columns of matrix b :");
    scanf("%d",&colb);
    
    if(!(rowsa >0 && cola >0 && rowsb >0 && colb >0 && cola==rowsb)){
        printf("error matrix dimensions are not valid!");
        printf("Matrix multiplication is not possible\n");
    }
    //try out finding out size of matrix by using sizeof to **mat;
    
    allocate_matrix_mem(mat_b,rowsb,colb);
    
    read_matrix(mat_b,rowsb,colb);

    print_matrix(mat_a,rowsa,cola);
    print_matrix(mat_b,rowsb,colb);


}

int allocate_matrix_mem(int **mat,int rows,int cols){
    mat = (int**)malloc(rows*sizeof(int*));
    
    for(int i=0;i<rows;i++){
        mat[i]=(int*)calloc(cols,sizeof(int));
    }
}

int read_matrix(int **mat,int rows,int cols){
    printf("Enter values for %d x %d matrix :\n",rows,cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("\n next row1\n");
            // segmentation fault issue 
            scanf("%d",&mat[i][j]);
            printf("\n next row\n");
        }
    }
}

int print_matrix(int **mat,int rows,int cols){
    printf("%d x %d matrix :\n",rows,cols);
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}

int matrix_mul(int **mat_a, int rowsa, int cola, int **mat_b, int rowsb, int colb, int **result_mat, int r_rows, int r_cols){

}
