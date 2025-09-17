#include <stdio.h>
int main() {
    int arry[5]={10,20,30,40,50};
    printf("%d\n",*(arry+1));
    printf("%d\n",*(arry+2));
    
    int*ptr=arry;
    printf("by ptr, %d\n",*(ptr+2));
    printf("by ptr[2], %d\n",ptr[2]);
    
    int *ptr1 = arry+3;
    printf("by *ptr1=arry+3, %d\n",*ptr1);


    return 0;
}