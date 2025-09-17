#include <stdio.h>

int naturalN(int n){
    printf("%d",n);
    if(n>0){
        // printf("%d ",naturalN(--n));
        // return n;
        naturalN(n-1);
        printf("%d",n);
    }
}

int main() {
    int n;
    printf("enter n:");
    scanf("%d",&n);

    //printf("%d",naturalN(n));
    naturalN(n);
    return 0;
}