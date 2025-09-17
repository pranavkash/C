#include <stdio.h>
int main() {
    int i=1;
    printf("Hello\n");
    goto label;
    for(;i<10;i++){
        int i=5;
        printf("%d ",i++);
        label:
    }
    return 0;
}