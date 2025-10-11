//A28 - Squeeze the character in s1 that matches any character in the string s2
#include <stdio.h>

void squeeze(char [], char []);

int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf(" %[^\n]", str1);
    

    printf("Enter string2:");
    scanf(" %[^\n]", str2);
    
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}
void  squeeze(char s1[], char s2[]){
    for (int i=0;s1[i]!='\0';i++){
        for(int j=0;s2[j]!='\0';j++){
            if(s1[i]==s2[j]){
                int k=i;
                for(k=i;s1[k]!='\0';k++){
                    s1[k]=s1[k+1];
                }
                i--;
                // if(s1[k+1]=='\0'){
                //     s1[k]='\0';
                // }
            }
        }
    }
}
