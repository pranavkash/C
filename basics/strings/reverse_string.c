#include<stdio.h>

char* functoreverse(char *str){
    int size=0;
    while(str[size++]);
    size--;

    for(int i=0;i<size/2;i++){
        char temp=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;
    }
    return str;

}

int main() {
    char str[30];
    printf("enter the string: ");
    scanf("%[^\n]",str);
    printf("Before reversing: %s\n",str);
    functoreverse(str);
    printf("After reversing: %s\n",str);
    
    
}