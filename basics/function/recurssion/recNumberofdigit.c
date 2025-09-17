#include <stdio.h>
//----------------using count as argument and return------
// int getnoofdigits(long int num,int count){
//     if(num){
//         num/=10;
//         count++;
//         return getnoofdigits(num,count);
//     }
//     return count;
// }

// int main() {
//     int count =0;
//     long int n;
//     scanf("%ld",&n);

//     count=getnoofdigits(n,count);
//     printf("number of digits = %d\n",count);
//     return 0;
// }


//-------using global variable--------------
// int count;
// void getnoofdigits(long int num){
//     if(num){
//         num/=10;
//         count++;
//         getnoofdigits(num);
//     }
// }

// int main() {
//     long int n;
//     scanf("%ld",&n);

//     getnoofdigits(n);
//     printf("number of digits = %d\n",count);
//     return 0;
// }

//-----------------no extra variables used only return---------
int getnoofdigits(long int num){
    if(num){
        num/=10;
        return getnoofdigits(num)+1;
    }
}

int main() {
    long int n;
    scanf("%ld",&n);

    int count = getnoofdigits(n);
    printf("number of digits = %d\n",count);
    return 0;
}
