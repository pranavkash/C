#include <stdio.h>
int main() {
    int num;
    int flag=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=2;i*i <=num; i++)// here i*i <= num is equal to i <= sqrt(num);
    {
        if(num % i == 0){
            printf("Not a prime\n");
            flag=1;
            break;
        }
    } 
    if(flag == 0)
    printf("Number is a Prime!!!!!!\n");
}