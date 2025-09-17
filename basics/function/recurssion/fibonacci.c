//wap to print fib till a limit.
#include <stdio.h>

void fib(int limit, int first, int second){
    int sum=first + second;
    if(sum<=limit){
        printf("%d, ",sum);
        fib(limit,second,sum);
    }else
    return;
}

int main () {
    int limit;
    scanf("%d",&limit);
    printf("Fibonacci series are : %d, %d, ",0,1);
    fib(limit,0,1);
    return 0;
}