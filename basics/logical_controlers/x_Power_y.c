#include <stdio.h>
int main() {
    int x,y,res=1;
    printf("Enter the value of x and y to print x^y:");
    scanf("%d%d",&x,&y);

    for(int i=1,i<=y,i++){
        res*=x;
    }
    /*same in while
    int i=1;
    while(1<=y){
        res *= x;
        i++;
    }*/

    /*same in while
    while(y){
        res *= x;
        y--;
    }*/

    printf("result=%d",res);

}