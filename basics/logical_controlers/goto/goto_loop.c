#include <stdio.h>
int main() {
    int n,i=1;
    scanf("%d",&n);

label:    if(i<=n){
        printf("%d ",i++);
        goto label;
    }
}