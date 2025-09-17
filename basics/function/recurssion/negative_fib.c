#include <stdio.h>

void negative_fibonacci(int, int, int, int);

int main()
{
    int limit;
    
    //printf("Enter the limit : ");
    scanf("%d", &limit);
    
    negative_fibonacci(limit, 0, 1, 0);
}

void negative_fibonacci(int limit,int i,int j,int k){
    if(limit >0){
        printf("Invaild input");
        return;
    }else if(i>0?-i>=limit:i>=limit){
        printf("%d, ",i);
        k=i-j;
        negative_fibonacci(limit,j,k,0);
    }
}