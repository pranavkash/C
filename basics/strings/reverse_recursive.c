// recursively reverse a string.

#include <stdio.h>
#include <string.h>

void reverse_recursive(char str[]);

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_recursive(str);
    
    printf("Reversed string is %s\n", str);
}

void reverse_recursive(char str[]){
    static int count=0;
    static int len=0;
    if(!len)
    len = strlen(str);
    
    if(count<len/2){
        char temp=str[count];
        str[count]=str[len-count-1];
        str[len-count-1]=temp;
        count++;
        reverse_recursive(str);
    }
}


//little different passing more variables to functiona and without static variable.
/*#include <stdio.h>
#include <string.h>

void reverse_recursive(char str[], int ind, int len);

int main()
{
    char str[30];
    
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_recursive(str, 0, strlen(str));
    
    printf("Reversed string is %s\n", str);
}

void reverse_recursive(char str[],int ind,int len){
    
    if(ind<len/2){
        char temp=str[ind];
        str[ind]=str[len-ind-1];
        str[len-ind-1]=temp;
        ind++;
        reverse_recursive(str,ind,len);
    }
}*/