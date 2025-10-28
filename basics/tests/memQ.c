#include<stdio.h>
#include<stdlib.h>
//sscanf and 65535 = 0xffff and octal 377 = 0xff
int main() {
    char *i= "0xFF 65535 0377";
    void *p;
    p=malloc(1*sizeof(int));
    sscanf(i,"%x%hd%o",(char*)p,(char*)p+1,(char*)p+3);
    printf("%d\n",*(int*)p);
    free(p);
    return 0;
}