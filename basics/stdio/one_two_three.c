#include<stdio.h>
#include<string.h>
int main(){
    char str[3]="two";
    for(printf("one");printf("%s",str);printf("three\n") ){strcpy(str,"");};
    return 0;
}