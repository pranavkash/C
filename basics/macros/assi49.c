//A49 - WAP to define a macro SIZEOF(x), without using sizeof operator
#include<stdio.h>

#define SIZEOF(x) ((char*)(&x+1) - (char*)&x)


int main() {
    int x;
    char x1;
    float x2;
    double x3;
    unsigned int x4;
    long int x5;
    short x6;

    printf("Size of int : %ld bytes\nSize of char : %ld byte\nSize of float : %ld bytes\nSize of double : %ld bytes\nSize of unsigned int : %ld bytes\nSize of long int : %ld bytes\nSize of short int : %ld bytes\n",SIZEOF(x),SIZEOF(x1),SIZEOF(x2),SIZEOF(x3),SIZEOF(x4),SIZEOF(x5),SIZEOF(x6));
    return 0;
}