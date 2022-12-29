#include<stdio.h>
struct student
{
 int r;
 char name[20],address[50];
 int age;
}s[15];
void main()
{
    int i;
    for(i=0;i<15;i++)
    {
        printf("Enter Details of %d student\n", i+1);
        scanf("%d%s%d%s", &s[i].r, s[i].name, &s[i].age, s[i].address);   
    }
    for(i=0;i<15;i++)
    {
        printf("Details of %d student\n", i+1);
        printf("Roll No. = %d Name = %s Age = %d Address =  %s\n", &s[i].r, s[i].name, &s[i].age, s[i].address);   
    }
}   