#include<stdio.h>
#include<stdlib.h>
int asc(const void*,const void*);
int dsc(void*,void*);
int main() {
    int arr[6]={6,2,9,4,9,1};
    qsort(arr,6,sizeof(int),asc);

    for(int i=0;i<6;i++){
        printf("%d,",arr[i]);
    }
}

int asc(const void*a,const void*b){
    return *(int*)a - *(int*)b;
}


int dsc(void*a,void*b){
    return *(int*)b - *(int*)a;
}

