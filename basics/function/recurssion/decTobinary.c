#include<stdio.h>
int tobinary(unsigned int num){ //unsigned is to take of -ve numbers 
//binary of neagtive number is same as the unsigned equivalent of it In binary memory pattern so just same memory pattern but just changing data type to unsigned does the job.
    if(num){
        tobinary(num/2);
        printf("%d",(int)num%2);
    }
}

int main() {
    long int num;
    printf("Enter the number :");
    scanf("%ld",&num);

    printf("Binary : ");
    tobinary(num);
}