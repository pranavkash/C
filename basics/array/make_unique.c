// remove duplicate elements from array without creating different array.

#include <stdio.h>
int main() {
    int size;
    printf("Enter the array size\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size;k++){
                    arr[k]=arr[k+1];
                    if(k==size-1){
                        arr[k]=0;
                        size--;
                    }
                }
                j--;
            }
        }
    }

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}