#include <stdio.h>

// int func(int a){
//     int b=a+1;
//     printf("count=%d, ",b);
//     func(b);
// }

int func(int a){
    printf("count=%d, ",a++);
    if(a<=391890)//261887 is generaly where stack overflow occurs
    func(a);
}
int main() {
    int count=0;
    func(count);
}