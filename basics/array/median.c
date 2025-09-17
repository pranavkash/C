#include <stdio.h>
int main() {
    int size1,size2;
    printf("Enter the 'n' value for Array A: ");
    scanf("%d",&size1);
    printf("Enter the 'n' value for Array B: ");
    scanf("%d",&size2);

    int arr1[size1],arr2[size2];

    printf("Enter the elements one by one for Array A: ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the elements one by one for Array B: ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }

    //bubble sort
    int swapped;
    for(int i=0;i<size1;i++){
        swapped=0;
     for(int j=0;j<size1-i-1;j++){
        if(arr1[j]>arr1[j+1]){
            int temp = arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
            swapped =1;
        }
     }   
     if(!swapped)
     break;
    }

    for(int i=0;i<size2;i++){
        swapped=0;
     for(int j=0;j<size2-i-1;j++){
        if(arr2[j]>arr2[j+1]){
            int temp = arr2[j];
            arr2[j]=arr2[j+1];
            arr2[j+1]=temp;
            swapped =1;
        }
     }   
     if(!swapped)
     break;
    }

    //medians
    float median1=0,median2=0;
    if(size1%2){
        median1=arr1[size1/2];
    }else{
        median1=((float)arr1[size1/2]+arr1[(size1/2)+1])/2;
    }

    if(size2%2){
        median2=arr2[size2/2];
    }else{
        median2=((float)arr2[size2/2]+arr2[(size2/2)-1])/2;
    }

    printf("Median of array1: %f\n",median1);
    printf("Median of array2: %f\n",median2);
    
    printf("Median of both array: %f\n",(median1+median2)/2);

    return 0;

}