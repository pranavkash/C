#include <stdio.h>

int main(){
    int ret= printf("%d %X %f %s\n",100,200,1.2,"ten");
    printf("ret = %d\n",ret);

    return 0;
}