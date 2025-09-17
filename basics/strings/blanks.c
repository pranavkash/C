//A21 - WAP to replace each string of one or more blanks by a single blank.
#include <stdio.h>
#include <string.h>

void replace_blank(char str[])
{
    int i=0, j=0,spaceflag=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\t'){
            if(!spaceflag){
            str[j++]=' ';
            spaceflag=1;
            }
        }else{
            str[j++]=str[i];
            spaceflag=0;
        }
        i++;
    }
    //remove trailing space
    if(j>0 && str[j-1]==' ')
        j--;
    str[j]='\0';
};

int main()
{
    char str[50];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);
    
    replace_blank(str);
    
    printf("%s\n", str);
}