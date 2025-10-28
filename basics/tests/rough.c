#include <stdio.h>

int main() {
    // char b[]={'A','B','C','D',-5};
    // printf("%c %c",b[3],b[4]);

    char a[]="hello world";
    void *p=a;
    int i=1323234,j=1;
    printf("%3d,%3d\n",i,j);
    //printf("size of a=%ld\n",sizeof(a));
    scanf("%5s",(char*)(p+6));
    printf("%*s\n",4,a);
}