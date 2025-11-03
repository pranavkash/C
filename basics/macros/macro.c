#include<stdio.h>

#define BUFFER_SIZE 40 //no ;
#define I int
#define MY main
#define plus + 
#define PF printf

#define SQUARE(n)  (n*n)//function like macro
#define L_TWO(a,b) (a>b ? a : b)
//even odd
#define IS_EVEN(num) (num%2 ? 0:1)
#define CLEAR_BIT(num,pos) (num & ~(1<<pos));


I MY() {
    int buff[BUFFER_SIZE];
    PF("I have power");
    EOF;
    NULL;

    FILE *fp;// here this is a typedef so it is 

    PF("quare of 4= %d\n",SQUARE(4));
    PF("quare of 4= %d\n",SQUARE(4+3));// here it will blinding replaced resulting 4+3*4+3=19 so bracketise.
    PF("quare of 4= %d\n",SQUARE((4+3)));

    printf("largest of 21&23 is : %d\n",L_TWO(21,23));

}