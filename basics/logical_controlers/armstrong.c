#include <stdio.h>
int main() {
    int orgNum;
    scanf("%d",&orgNum);
    int sum=0, temp = orgNum;
    while(temp){
        int n=temp%10;
        sum += n*n*n;
        temp/=10;
    }
    if(sum == orgNum){
        printf("number is Armstrong!!\n");
    }else
    printf("Number is not Armstrong\n");

}