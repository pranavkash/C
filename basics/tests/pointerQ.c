#include<stdio.h>

int main() {
    int d;
    double *s=0;
    d=(int)(s+0);
    printf("%d",d);
    d=(int)(s+1);
    printf("%d",d);
}