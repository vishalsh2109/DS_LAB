#include<stdio.h>
struct student
{
 int r;
 char name[20];
 float s1,s2,s3;
};
void main()
{
    struct student s[5];
    int i;
    float p[5];
    for(i=0;i<5;i++)
    {
        printf("Enter Details of %d student\n", i+1);
        scanf("%d%s%f%f%f", &s[i].r, s[i].name, &s[i].s1, &s[i].s2, &s[i].s3);
        p[i]=((s[i].s1+s[i].s2+s[i].s3)*100)/3;
    }

    for(i=0;i<5;i++)
    {
        printf("Details of %d student\n", i+1);
        printf("%d\n%s\n%f\n", s[i].r, s[i].name,p[i]);
    }   
}


