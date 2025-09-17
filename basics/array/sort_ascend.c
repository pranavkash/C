//wap to sort array in ascending order.

#include <stdio.h>
int main (){
    int size;
    printf("Enter the array size\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int temp=0,size1=size;
    for(int i=0;i<size;i++){
        for(int j=0;j<size1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        size1--;//without this also it will work.
    }
    
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    
}