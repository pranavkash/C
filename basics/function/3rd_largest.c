#include <stdio.h>

int third_largest(int [], int);

int main()
{
    int size, ret;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size];
    
    //Read elements into the array
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //funtion call
    ret = third_largest(arr, size);
    
    printf("Third largest element of the array is %d\n", ret);
}

int third_largest(int* base, int size){
    int max1=0,max2=0,max3=0;
    
    for(int i = 0; i<size;i++){
        //max1 = base[i]>max1?base:max1;
        if(base[i]>max1){
            max3=max2;
            max2=max1;
            max1=base[i];
        }else if(max2<base[i]){
            max3=max2;
            max2=base[i];
        }else if(max3<base[i]){
            max3=base[i];
        }
    }
    return max3;
}
