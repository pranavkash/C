#include<stdio.h>
int sumdigits(int n,int sum){
    if(n){
        sum += n%10;
        sumdigits(n/10,sum);
    }else
    return sum;// it will return to main() when no other stack frames are returning , returnn value will be passed till main and not lost.
}
int main() {
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    int sum = sumdigits(n,0);
    printf("sum =%d\n",sum);
}


//another way
int sum(int num){
    if(num){
        int ret = num%10;
        num = num/10;
        return ret+=sum(num);
    }else
    return 0;
}

int main () {
    int n;
    scanf("%d",&n);
    
    int total=sum(n);
    printf("Sum of the digits is %d",total);
}
