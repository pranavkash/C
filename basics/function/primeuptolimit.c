#include <stdio.h>

int checkprime(int);

void prime_upto_limit(int);

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    prime_upto_limit(limit);
    return 0;
}

void prime_upto_limit(int limit){
    for(int i=2;i<=limit;i++){
        if(checkprime(i))
        printf("%d ",i);
    }
}

int checkprime(int num){
    int isprime=1;
    
    for(int i=2;i*i<=num;i++){

        //if(num%i == 0){
        if(!(num%i)){
            isprime=0;
            return 0;
        }
    }
    return isprime;
}