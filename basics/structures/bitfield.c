#include<stdio.h>

struct bitfield {
    unsigned char FL_1:1;
    unsigned short int FL_2:1;
    unsigned char FL_3:1;
    unsigned  int FL_4:1;
    unsigned long int FL_5:1;
}Bi;


int main() {
    printf("size: %ld\n",sizeof(Bi));
    Bi.FL_1=1;
    
    printf("flag: %d\n",Bi.FL_1);
      
    return 0;


}