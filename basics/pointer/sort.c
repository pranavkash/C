#include <stdio.h>

void sortprint(int* arr,int size);

int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    sortprint(arr,size);

    return 0;
}

void sortprint(int* arr,int size){
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        min=arr[i]<min ?arr[i]:min;
    }
    printf("%d",min);
    int min2;
}
