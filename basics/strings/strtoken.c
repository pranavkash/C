#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello bengaluru good morning.";
    char *token = strtok(str, " ");
    while(token != NULL){
        puts(token);
        // printf("%s\n",token);
        token = strtok(NULL," ");//strtok is statefull so it remembers where it left off.
        //printf("%s\n",token); //this give segmentation fault because printing after so this will encounter null.
    }

    return 0;
}