#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *str = (char*)malloc(30);
    printf("Enter the string:");
    scanf("%[^\n]",str);

    int l = strlen(str);
    int flag=0;
    str = realloc(str,l+1);
    for(int i=0;i<l-1;i++){
        for(int j=i+1;j<l;j++){
            if(str[i]==str[j]){
                flag=1;
                break;
            }
        }
        if(flag)
        break;
    }
    if(flag)
    printf("Not unique\n");
    else
    printf("It is unique\n");
}