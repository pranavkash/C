//WAP to perform variance calculation with dynamic arrays.
#include <stdio.h>
#include <stdlib.h>
float variance(int *array, int size);
int main() {
    int size,*array;
    printf("enter the No.of elements: ");
    scanf("%d",&size);
    array = (int *) calloc(size,sizeof(int));
    //array = (int *) realloc(array,sizeof(int)*size);

    printf("Enter the %d elements:\n",size);

    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    printf("Variance is %f",variance(array,size));

    return 0;

}

float variance(int *array, int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum += array[i];
    }
    int mean = sum/size;
    sum=0;
    //printf("dsquare=\n"); debug lines
    for(int i=0; i<size;i++){
        array[i]= array[i]-mean;
        array[i]*=array[i];
        //printf("%d\n",array[i]);
        sum+=array[i];
    }
    return sum/(float)size;
}