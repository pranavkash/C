#include<stdio.h>
int main () {
    FILE * fptr = fopen("file.txt","r");
    if(fptr == NULL){
        printf("file open error\n");
        return 0;
    }
    char ch;
    while((ch=fgetc(fptr))!=EOF){
        putchar(ch);
    }

    printf("End of file-----");

}