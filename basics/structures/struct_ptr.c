#include<stdio.h>
struct Student {
    int i;
    char ch;
};
void func(struct Student *sptr)
{
    printf("-> %d\n",sptr->i);
    printf("-> %c\n",(*sptr).ch);
    sptr->ch='B';
}

int main() {
    struct Student s1={100,'a'};
    struct Student *sptr=&s1;
    func(sptr);

}