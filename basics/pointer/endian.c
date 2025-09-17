#include <stdio.h>
int main() {
    int x=0x3d4f239a;
    unsigned char *ptr = (char *) &x;

    printf("%x\n",*ptr);
    return 0;
}