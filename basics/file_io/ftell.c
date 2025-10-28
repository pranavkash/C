#include<stdio.h>
int main() {
    FILE * fp = fopen("file.txt","r");
    printf("offset index = %ld\n",ftell(fp));
    char ch = fgetc(fp);
    printf("offset index = %ld\n",ftell(fp));
    ch = fgetc(fp);
    printf("offset index = %ld\n",ftell(fp));
    rewind(fp);
    printf("offset index = %ld\n",ftell(fp));

    
}