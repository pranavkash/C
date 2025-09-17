#include<stdio.h>
int main () {
    char *str="hello";
    int i=0;
    while(str[i++]);
    printf("size with eol %d\n",i);
    printf("size without eol %d\n",i-1);
}