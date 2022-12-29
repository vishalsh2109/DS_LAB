#include<stdio.h>
#include<string.h>
struct student 
{
    int roll_no;
    char name[15];
    int marks;
};

typedef struct student s;

int main()
{
    int i;
    s s1;
    s1.roll_no=1;
    gets(s1.name);
    strcpy(s1.name,s1.name);
    s1.marks=45;
    printf("%d %s %d", s1.roll_no, s1.name, s1.marks);
}