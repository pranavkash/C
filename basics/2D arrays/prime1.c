// update the 2D array elements with next prime if it is not prime.
#include<stdio.h>

int checkprime(int n){
    int isprime=1;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int nextprime(int n){
    while(!checkprime(++n));
    return n;
}

int main() {
    int matrix[3][3] = {{2,3,8},{17,11,20},{30,40,60}};

    printf("matrix updated: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(!checkprime(matrix[i][j])){
                matrix[i][j]=nextprime(matrix[i][j]);
            }
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}