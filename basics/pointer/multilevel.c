#include<stdio.h>

int main() {
    int x=10;
    int *p1=&x;
    int **p2=&p1;
    int ***p3 = &p2;

    printf("x=%d\n",x);
    printf("x=%d\n",*p1);
    printf("x=%d\n",**p2);
    printf("x=%d\n",***p3);
    printf("x=%p\n",**p3);
}