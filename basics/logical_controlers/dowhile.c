#include <stdio.h>
int main(){

    char letr;
    do{
        printf("Enter the character [y/Y]");
        scanf(" %c",&letr);
    }while(letr != 'y' && letr != 'Y');

    printf("success\n");
} 