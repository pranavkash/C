#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);

    printf("Binary=");
    for(int i=31;i>=0;i--){
        //printf("%d",num&(1<<i)?1:0); //method 1
        printf("%d",num >> i &1) ;  //method 2
    }
    printf("\n");
    return 0;
}