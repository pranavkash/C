#include <stdio.h>
int main() {
    int size,sum=0;
    printf("Enter the array size\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    printf("Average is: %.3f\n",(float)sum/size);

    return 0;
}