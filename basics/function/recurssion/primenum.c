#include <stdio.h>
int is_prime(int num,int itr){
    if(num%itr ==0)
    return 0;
    else{
        if(num>itr+1)
        return is_prime(num,itr+1);
        else return 1;
    }
}
int main() {
    int num;
    printf
    scanf

    int ret = is_prime

}