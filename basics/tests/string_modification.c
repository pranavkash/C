#include<stdio.h>

int main() {
    char a[]="hello World";
    a[5]=a[4]-a[7];     //this makes a[5] = 0 which is \0;
    printf("%s\n",a);
    return 0;
}
