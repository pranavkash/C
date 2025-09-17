//wap to write your own tokenizer with multiple delimeter.
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];
    
    printf("Enter the string  : ");
    scanf("%s", str);
    
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");
    getchar();
    scanf(" \n %s", delim);
    __fpurge(stdout);
    
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
}

char *my_strtok(char str[], const char delim[]){
    static char *ip=0;
    if(str)
    ip=str;
    static int i=0;
    int start=i;
    int j=0;
    char tok[50]={0};
    
    while(ip[i]!='\0'){
        while(delim[j]!='\0'){
            if(ip[i]==delim[j]){
                ip[i]='\0';
                //for multiple delimiters;
                //check if the pointer passing is pointing to EOF effectively empty string. then continue cheking for delimeter.
                if(i==start){
                    start=++i;
                    j=0;
                    continue;
                }else{
                    i++;
                    return ip+start;
                }
            }
            j++;
        }
        j=0;
        i++;
    }
    if(ip[start]!='\0')
    return ip+start;
    else
    return NULL;
    
}