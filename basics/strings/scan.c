#include<stdio.h>
int main(){
    char str[30];
    printf("Enter the string: ");
    scanf("%s",str);
    fgets(str,30,stdin);
    scanf("%30[^\n]",str);

    printf("You entered : %s\n",str);

    return 0;
}