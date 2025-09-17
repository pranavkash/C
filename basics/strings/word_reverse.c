#include<stdio.h>
#include<string.h>
int main(){
    char * str="Hello how are you of fine";
    char * token= strtok(str," ");
     while(token != NULL){
        int len= strlen(token);

        char temp[20];
        int i=0,j=0;
        char ptr=token[len-i-1];
        do{
            temp[i]=ptr;
            ptr=token[i];
            i++;
        }while(ptr);
        puts(temp);
        token = strtok(NULL," ");//strtok is statefull so it remembers where it left off.
    }

    return 0;
}