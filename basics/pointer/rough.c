//wap to scan 3 string and print it. [use dma].
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char *s[3];
    char buffer[100];
    for (int i=0;i<3;i++){
        scanf(" %[^\n]",buffer);
        s[i] = (char *) malloc(strlen(buffer));
        strcpy(s[i],buffer);
    }

    printf("strings are below>>>\n");
    for(int i=0;i<3;i++){
        printf("--%s\n",s[i]);
    }
    for(int i=0;i<3;i++){
        free(s[i]);
    }

}