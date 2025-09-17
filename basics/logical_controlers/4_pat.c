#include <stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        int j=1;
        int res=i;
        do{
            printf("%d",res);
            res+=j;
            j++;
        }while(j<=4);
        printf("\n");
    }
}
