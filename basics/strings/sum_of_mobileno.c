// WAP to take mobile number as string and find sum of digits.
#include<stdio.h>
int main() {
    char str[10];
    printf("Enter the string mobile no: ");
    //scanf("%s",str);
    fgets(str,10,stdin);
    //scanf("%10[^\n]",str);

    printf("You entered : %s\n",str);
    int sum=0,l=0;
    while(str[l]){
        if(str[l])
        sum += str[l]-48;
        l++;
    }
    printf("Your sum :%d\n",sum);


    return 0;
}