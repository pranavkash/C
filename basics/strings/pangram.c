//wap tp find if a string is pangram ie has all alphabets.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int isPangram(char *str,int len){
    int arr[26]={0};

    for(int i=0;i<len;i++){
        int index;
        if(str[i]>='a' && str[i]<='z' ){
            index=str[i]-'a';
            arr[index]=1;
        }else if(str[i]>='A' && str[i]<='Z'){
            index=str[i]-'A';
            arr[index]=1;
        }
    }

    //
    int i=0;
    //----debug print block.
    // while(i<26){
    //     printf("%d ",arr[i]);
    //     i++;
    // }
    while(i<26){
        if(!arr[i]) return 0;
        i++;
    }
    
    return 1;
}

int main() {
    char *str=(char *)malloc(100*sizeof(char));
    fgets(str,100,stdin);
    int len = strlen(str);
    str = realloc(str,len);
    
    if(isPangram(str,len))
    printf("is a pangram\n");
    else
    printf("not a pangram\n");
    
    return 0;

}