#include <stdio.h>
int my_strcmp(char*str1,char*str2){
    int i=0;
    while(str1[i]||str2[i])
    {
        if(str1[i]!=str2[i])
        {
            return str1[i]-str2[i];
        }
        i++;
    }
    return 0;
}

//------or this----
int my_strcmp(char*str1,char*str2){
    int i=0;
    while(str1[i]&&str2[i])
    {
        if(str1[i]!=str2[i])
        {
            return str1[i]-str2[i];
        }
        i++;
    }
    return str1[i]-str2[i];
}