#include <stdio.h>
int main(){
    int width;
    printf("enter the an odd number for width of a pyramid to be printed: ");
    scanf("%d",&width);

    // to find the number of middle column
    int mid = width/2 +1;
    //to find the height of the pyramid
    int maxrows=mid-1;
    //this is the number of spaces to be printed.which is half width -1 , -1 is done in the loop.
    int space = mid;
    for(int rows = 0; rows<=maxrows;rows++){
        for(int i=1;i<=mid;i++){
            if(space-i >0){
                printf("   ");
            }else{
                printf(" X ");
            }
        }
            printf(" \n");
            space--;
            mid++;
    }
}