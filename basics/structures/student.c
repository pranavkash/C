// wap to create 3 student details that shoudl store name , roll, math,phy,chem marks.
/*
print in format :
roll.no    name    maths   physics chemistry   average
------------------------------------------------------
data
------------------------------------------------------
*/ 

#include <stdio.h>

struct student{
    char name[30];
    int roll;
    int math;
    int phy;
    int chem;
    float avg;
};

int main() {

    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    struct student stu[n];
    for(int i=0;i<n;i++){
        //printf("Enter Name roll math phy chem marks:\n");
        //scanf("%30s%d%d%d%d",stu[i].name,&stu[i].roll,&stu[i].math,&stu[i].phy,&stu[i].chem);
        printf("Name :");scanf(" %[^\n]",stu[i].name);
        printf("roll no: ");scanf("%d",&stu[i].roll);
        printf("math marks:");scanf("%d",&stu[i].math);
        printf("physics marks:");scanf("%d",&stu[i].phy);
        printf("chemistry marks:");scanf("%d",&stu[i].chem);
        stu[i].avg=(stu[i].math+stu[i].phy+stu[i].chem)/(float)n;
    }
    printf("roll.no    name    maths   physics chemistry   average\n");
    printf("-------------------------------------------------------\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%d\t%d\t%d\t%f\n",stu[i].roll,stu[i].name,stu[i].math,stu[i].phy,stu[i].chem,stu[i].avg);
    }
    printf("-------------------------------------------------------\n");
    return 0;

}