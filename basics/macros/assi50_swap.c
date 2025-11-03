//A50 - WAP to define a macro swap (t, x, y) that swaps 2 arguments of type t

#include<stdio.h>

#define SWAP(type,x1,x2) (temp=x1; \
x1=x2;\
x2=temp;\
)

int main() {
    int i1,i2;
    char r1,r2;
    short h1,h2;
    float f1,f2;
    double d1,d2;
    char *s1,*s2;

    int choice;
    printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:{
        printf("Enter the num1:");
        scanf("%d",&i1);
        printf("Enter the num2:");
        scanf("%d",&i2);
        SWAP(int,i1,i2);
    }
        break;
    
    case 2:
        break;
    
    case 3:
        break;
    
    case 4:
        break;
    
    case 5:
        break;
    
    case 6:
        break;
    
    default:
        break;
    }


}