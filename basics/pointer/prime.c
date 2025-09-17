#include <stdio.h>

int is_prime(int);

int main()
{
    int n;
    scanf("%d",&n);
    if(n<1)
    printf("Invalid input\n");
    else{
        if(is_prime(n)){
            printf("%d is a prime number\n",n);
        }else
        printf("%d is not a prime number\n",n);
    }

    return 0;
}

int is_prime(int n){
    int nodivisor=1;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            nodivisor=0;
            break;
        }
    }
    return nodivisor;
}