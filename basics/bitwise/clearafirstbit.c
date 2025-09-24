//wap to clear first set bit from lsb.

#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    for(int i=0;i<=32;i++){
        if(n&(1<<i)){
            n=n&~(1<<i);
            break;
        }
    }
    printf("number after clearing a bit=%d\n",n);
    return 0;
}