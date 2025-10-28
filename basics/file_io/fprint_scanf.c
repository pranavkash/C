#include<stdio.h>
int main() {
        FILE * fptr = fopen("file.txt","r");
    if(fptr == NULL){
        printf("file open error\n");
        return 0;
    }
    char ch[20];
    int ID;
    fscanf(fptr, '%[^,],%d\n',ch, &ID);
    printf("name : %s\n",ch);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       


    //find the size of file
    fseek(fptr,0,SEEK_END);
    printf("size=%ld",ftell(fptr));

}