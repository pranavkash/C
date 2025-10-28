#include<stdio.h>
#include<string.h>

int main() {
    FILE *fptr = fopen("file.txt","r");
    if(fptr == NULL){
        printf("error on opening file!\n");
    }
    char line[100];
    char longestline[100];

    int highest=0,len=0; 
    while(!feof(fptr))
    {
        fscanf(fptr,"%[^\n]\n",line);
        len = strlen(line);
        if(len>highest){
            highest=len;
            strcpy(longestline,line);
        }
    }

    printf("longest line: \n%s\n",longestline);

    return 0;    
}