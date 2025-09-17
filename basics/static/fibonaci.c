//wap to print fibonaci using recursion.
// use one argument void fibonaci(int).
#include <stdio.h>

void fibonaci(int limit){
    static int f=0, s=1, sum=0;
    if(f<=limit){
        printf("%d ",f);
        sum = f+s;
        f=s;
        s=sum;
        fibonaci(limit);
    }
}

int main(){
    int limit;
    scanf("%d",&limit);
    fibonaci(limit);
    return 0;   
}