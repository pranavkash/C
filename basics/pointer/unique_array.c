// wap to create a unique arr using a function.

#include <stdio.h>

void fun(int *arr1, int size, int *arr2, int *new_size);

int main() {
    int size=1, ret,newsize=0;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    int arr[size],newarr[newsize];
    //********carefull *ptr++ takes to pointer arithmatic and compiler will do *(ptr++).
    //to do *ptr++ use (*ptr)++ to update value of pointer.*************
    //below is the example:
    // int *new_size=&newsize;
    // printf("newsize=%d\n",*new_size++);
    //     printf("newsize=%d\n",*new_size);
    //*********/

    //Read elements into the array
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    //call unique array filtering function
    fun(arr,size,newarr,&newsize);

    //print the new array
    for(int i=0;i<newsize;i++){
        printf("%d ",newarr[i]);
    }
    printf("\n");
}

void fun(int *arr1, int size, int *arr2, int *new_size)
{
    for(int i=0;i<size;i++){
        int found=0;
        for(int j=0;j<*new_size;j++){
            if(arr1[i]==arr2[j]){
                found=1;
            }
        }
        if(!found){
            //X X X
            //*new_size++ it does pointer arithmatic
            (*new_size)++;
            arr2[*new_size-1]=arr1[i];
        }
    }
}