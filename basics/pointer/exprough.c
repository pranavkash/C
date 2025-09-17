#include <stdio.h>
int main() {
    int x=69;
    int*ptr;
    ptr = &x;

    printf("%p\n",ptr);
    return 0;
}