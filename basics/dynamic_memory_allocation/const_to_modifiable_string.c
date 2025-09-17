// WAP define a function to take const string and return modifiable string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * const_to_modifiable(char *str){
    int len= strlen(str);
    char *str1= (char*)malloc(len+1);
    //char str1[len+1];
    strcpy(str1, str);
    //return str1; not required bcz strcpy is already returning pointer this will be returned automatically.
    //even if str1 is created in function it can accesssed after function beacuse heap segment is alive till programe end unlike stack so can be accessed after function.
} 

int main() {
    char *str = const_to_modifiable("Hello");
    str[0]= 'S';
    puts(str);
    free(str);
    return 0;
}
