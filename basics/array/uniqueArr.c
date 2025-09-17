// create array of unique elemnts using original array.

#include <stdio.h>
int main() {
    int size;
    printf("enter size of array: ");
    scanf("%d",&size);
    int arr[size],unique[size];
    printf("Enter array elements :");
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
        unique[i]=0;
    }
    unique[0]=arr[0];
    int exists,unii=0;
    for(int i=0;i<size;i++){
        exists=0;
        for(int j=0;j<=unii;j++){
            if(arr[i]==unique[j]){
                //printf("exisist\n");
                exists = 1;
                continue;
            }
        }
        if(!exists){
            unique[++unii]=arr[i];
            //printf("not exisist %d\n",arr[i]);
        }
    }

    for(int i=0;i<size;i++){
        printf("%d ",unique[i]);
    }
} 