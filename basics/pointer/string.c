#include<stdio.h>
int main(){
    char str1[]="hello";
    char str2[]="hello";
    char *str3="hello";
    char *str4="hello";// both pointer point to same address

    printf("%p\n",str1);
    printf("%p\n",str2);
    printf("%p\n",str3);
    printf("%p\n",str4);
    printf("%s\n",str4);
    puts(str2);

}