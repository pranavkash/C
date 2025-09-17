#include <stdio.h>
int main() {
    int nday,startday;
    do{
        printf("Enter the nth day of the year 1-365:");
        scanf("%d",&nday);
    }while(!(nday>=1 && nday<=365));

    do{
        printf("Menu of days:\n1)Sunday\n2)Monday\n3)Tuesday\n4)Wednesday\n5)Thursday\n6)Friday\n7)Saturday\n");
        scanf("%d",&startday);
    }while(!(startday<=7 && startday>=1));

    int res=((nday+startday-1)%7);
    switch(res){
        case 0 : {
            printf("Sunday");
            break;
        }
        case 1: {
            printf("Monday");
            break;
        }
        case 2:{
            printf("Tuesday");
            break;
        }
        case 3:{
            printf("Wednesday");
            break;
        }
        case 4:{
            printf("Thursday");
            break;
        }
        case 5:{
            printf("Friday");
            break;
        }
        case 6:{
            printf("Saturday");
            break;
        }
        default:{
            printf("something is wrong %d",(nday+startday)%7);
        }
    }

}