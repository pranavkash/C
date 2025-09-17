#include <stdio.h>

int fact(int n){
    if(n>1){
        return n*fact(n--);
    }else
    return 1;
}

int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    
    printf("factorial of %d is %d",n,fact(n));
    return 0;
}