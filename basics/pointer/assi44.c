//A44 - WAP to convert Little Endian data to Big Endian
#include<stdio.h>
#include<stdlib.h>

int main ( ){
    int size,data;
    short shdata;

    printf("enter the size od data=");
    scanf("%d",&size);

    printf("enter the data:");
    if(size == sizeof(int)){
        scanf("%X",&data);
        char* pt = &data;
        // bitwise XOR swapping
        //swapping pt and pt+3
        *pt=*pt ^ *(pt+3);
        *(pt+3)=*pt ^ *(pt+3);
        *pt=*pt ^ *(pt+3);
        //swapping pt+1 and pt+2 
        *(pt+2)=*(pt+2) ^ *(pt+1);
        *(pt+1)=*(pt+2) ^ *(pt+1);
        *(pt+2)=*(pt+2) ^ *(pt+1);
        //normal way of swapping
        /* char temp = *(pt+3);
        *(pt+3)=*pt;
        *pt=temp;
        temp = *(pt+1);
        *(pt+1)=*(pt+2);
        *(pt+2)=temp; */
        printf("After conversion %X\n",data);
    }
    else if (size == sizeof(short)){
        scanf("%hX",&shdata);
        char* pt = & shdata;
        *pt=*pt ^ *(pt+1);
        *(pt+1)=*pt ^ *(pt+1);
        *pt=*pt ^ *(pt+1);
        /* char temp = *(pt+1);
        *(pt+1)=*pt;
        *pt=temp; */
        printf("After conversion %hX\n",shdata);
    }

    return 0;
}