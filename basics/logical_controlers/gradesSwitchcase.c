#include <stdio.h>
int main() {
    int marks;

    while(1){

        printf("enter the marks:(type x to exit)\n");
        scanf("%d", &marks);
    
        switch (marks){
            case 0 ... 30:{
                printf("The grade is F\n");
                break;
            }
            case 31 ... 45: {
                printf("The grade is C\n");
                break;
            }
            case 46 ... 60: {
                printf("The grade is B\n");
                break;
            }
            case 61 ... 75: {
                printf("The grade is A\n");
                break;
            }
            case 76 ... 100: {
                printf("The grade is S\n");
                break;
            }
            default:{
                printf("entered value is invaild\n");
                break;
            }
            case 999: return 0;
        }
    }
    return 0;
}