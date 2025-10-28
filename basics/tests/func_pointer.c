#include<stdio.h>

int main(){
    const char *foo();//const leads to compliation error.
    *foo()='A';//attempting to write to string literal which is readonly. segmentation fault.
    printf("%s",foo());
    return 0;
}

char *foo() {
    return "casual call";
}