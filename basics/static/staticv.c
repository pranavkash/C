#include <stdio.h>
int main() {
    static int x=1;
    for(int i=0;i<5;i++){
        static int x=10;
        x++;
        printf("x= %d\n",x);
    }
    printf("x= %d\n",x);
    return 0;
}