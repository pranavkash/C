#include<stdio.h>
#include<string.h>
void fun(int **arr,int size){
    printf("%d ",*arr[0]);
    printf("%d ",*arr[1]);
    printf("%d ",*arr[2]);
    printf("\n");
    //can derefernce by using brackets similar to 2d array.
    printf("%d ",arr[0][0]);
    printf("%d ",arr[1][0]);
    printf("%d ",arr[2][0]);

}

void fun1(char **s,int size){
    for(int i=0;i<size;i++){
        //puts(s[i]);
        putchar(s[i][strlen(s[i])-1]);
    }
}

int main () {
    int x=10,y=20,z=30;

    int *arr[3]= {&x,&y,&z};

    fun(arr,3);

    char *s1 = "one";
    char *s2 = "two";
    char *s3 = "three";
    char *s4 = "four";

    char *s[4] = {s1,s2,s3,s4};
    fun1(s,4);
    return 0;
}
