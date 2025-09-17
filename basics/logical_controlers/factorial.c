#include <stdio.h>
int main() {
    
    while(1){
        int num=0;
        unsigned long int res=1;
        printf("enter a number: ");
        scanf("%d",&num);
        if(num < 0){
            printf("Invaild entry");
            return 0;
        }else{
            while(num){
                res*=num;
                num--;
            }
        }
            printf("result = %ld\n",res);
    }
}