#include<stdio.h>
#include<string.h>
int main () {
    char *str1="hello";
    char *str2="hollo";
    int re=strcmp(str1,str2);
    
    printf("result =%d\n",re);
    
    //char *str3="Welcome";// this will cause segmentation fault as it is pointer to string which is immutable lives in code section.
    char str3[]="Welcome";
    char *str4="hello";
    
    printf("cpy result=");
    puts(strcpy(str3,str4));
    return 0;
}