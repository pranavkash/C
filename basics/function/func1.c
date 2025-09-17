#include <stdio.h>
int factorial(int n){
    int fact=1;
    while(n){
        fact *= n;
        n--;
    }
    return fact;
}

int main() {
    int n;
    scanf("%d",&n);

    if(n>0)
    printf("factorial=%d\n",factorial(n));

}