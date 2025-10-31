//wap to sort names and implements your own strcpy and strcmp.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void sort_names(char (*)[20],int rows);
void print(char (*)[20], int rows);

char * my_strcpy(char * dest,char * src){
    while ((*dest++ = *src++) !='\0');
    return dest;
}

int my_strcmp(char *str1,char *str2) {
    while(*str1 != '\0' && *str1 == *str2)// either we hit null char or we hit difference we exit;
    {
        str1++;
        str2++;
    }
    // after hitting difference or null
    return (unsigned char)*str1-(unsigned char)*str2;
}

int main() {
    char (*arr)[20];
    int  n;
    printf("enter the number of names: ");
    scanf("%d",&n);
    arr=malloc(n*sizeof(char[20]));
    int i=0;
    while(i<n){
        printf("enter the %dth name:",i+1);
        scanf(" %[^\n]",arr[i]);
        i++;
    }

    printf("Entered names are:\n");
    print(arr,n);

    sort_names(arr,n);
}

void sort_names(char (*arr)[20],int rows){
    for(int i=0;i<rows;i++){
        int minIndex = i;
        for(int j=i;j<rows-i;j++){
            int cmp=0;
            cmp = my_strcmp(arr[j],arr[minIndex]);
            if(cmp<0){
                minIndex=j;
            }
        }
        if(minIndex!=i){
            char temp[20];
            my_strcpy(temp,arr[minIndex]);
            my_strcpy(arr[minIndex],arr[i]);
            my_strcpy(arr[i],temp);
        }
    }

    printf("sorted names:\n");
    print(arr,rows);
}

void print(char (*arr)[20], int rows){
    int i=0;
    while(i<rows){
        printf("%d:%s\n",i,arr[i]);
        i++;
    }
}