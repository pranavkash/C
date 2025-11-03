#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct subject
{
    char Sub_name[20];
    int marks;
}subject;

typedef struct student
{
    int RollNo;
    char name[20];
    //char (*subjects)[20];
    //int marks[20];
    subject *subs;
    int avg;
    char  grade;
}S;



int main () {
    int no_sub,no_studs;
    printf("Enter no.of students :");
    scanf("%d",&no_studs);
    printf("Enter no.of subjects :");
    scanf("%d",&no_sub);

    S students[no_studs];
    for(int i=0;i<no_studs;i++){
        students[i].subs=(subject*) malloc(no_sub*sizeof(subject));
    }

    for(int i=0; i<no_sub;i++){
        printf("Enter the name of subject %d :",no_sub);
        char name[20];
        scanf(" %20[^\n]",name);
        for(int j=0;j<no_studs;j++){
            strcpy(students[j].subs[i].Sub_name,name);
            //printf("name of sub is %s\n",students[j].subs[i].Sub_name);
        }
    }

    for(int i=0;i<no_studs;i++){
        printf("----------Enter the student datails-------------\n");
        printf("Enter the student Roll no. :");
        scanf("%d",&students[i].RollNo);
        printf("Enter the student %d name :",i+1);
        scanf(" %20[^\n]",&students[i].name);

        //scanning subject marks
        for(int j=0;j<no_sub;j++){
            printf("Enter %s mark : ",students[i].subs[j].Sub_name);
            scanf("%d",&students[i].subs[j].marks);
        }
        
    }

    printf("----Display Menu----\n1. All student details\n2. Particular student details\nEnter your choice : ");
    int choice;
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        break;
    
    default:
        break;
    }
    

}