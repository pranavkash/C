#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Car{
    char name[20];
    int price;
    int mileage;
};

int main() {
    
    struct Car *C= malloc(2*sizeof(struct Car));
    //C1->name="maruti";//this does not work as arrays can be assigned like that in c.
    //if this has to work then it has to declared as char*.
    
    strcpy(C[0].name,"Maruti");
    C[0].price=8000;
    C[0].mileage=25;
    strcpy(C[1].name,"suzuki");
    C[1].price=12000;
    C[1].mileage=35;

    printf("Name: %s\n",C[0].name);
    printf("Price: %d\n",C[0].price);
    printf("Mileage: %d\n",C[0].mileage);
    printf("Name: %s\n",(C+1)->name);
    printf("Price: %d\n",(C+1)->price);
    printf("Mileage: %d\n",(C+1)->mileage);
    
    free(C); // free always
    return 0;


}