/**
Name: Pranav kashayp
Date:31/07/2025
Description:Find the fibonaci series upto n
*/
#include <stdio.h>
int main() {
    int n;
    do{
        printf("Enter a number Till which fibonaci series to be generated:");
        scanf("%d",&n);
    }while(!n>0);

    int first=0,second=1,new=1;
    printf("0");
    while(new <= n){
        printf(",%d",new);
        new=first+second;
        first = second;
        second = new;
    }
    printf("\n");
}