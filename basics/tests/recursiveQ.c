#include<stdio.h>
int foo(int *a,int n){
    static int l;// static variables are innitialised to 0 by default.
    if(n<0)
    return l;
    if(l<a[n])
    l=a[n];
    return foo(a,n-1);
}

int main() {

    int a[5]={10,15,-50,-7,19};
    printf("%d\n",foo(a,4));
    return 0;
}