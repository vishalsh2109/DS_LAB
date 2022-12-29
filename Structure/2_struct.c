#include<stdio.h>
struct student
{
 int r;
 char name[20];
 int s1,s2,s3;
}s[5];
void main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter Details of %d student\n", i+1);
        scanf("%d%s%d%d%d", &s[i].r, s[i].name, &s[i].s1, &s[i].s2, &s[i].s3);   
    }
    for(i=0;i<5;i++)
    {
        printf("Details of %d student\n", i+1);
        printf("Roll No. = %d Name = %s Marks 1 = %d Marks 2 =  %d Marks 3 = %d\n", s[i].r, s[i].name, s[i].s1, s[i].s2, s[i].s3);   
    }
}   