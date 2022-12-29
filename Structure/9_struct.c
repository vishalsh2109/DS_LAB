#include<stdio.h>
struct student
{
 int r;
 char name[20],address[50];
 int age;
};

int iseven(struct student s[15])
{
    int i;
    for(i=0;i<15;i++)
    {
        if(s[i].r % 2 == 0)
        printf("Roll No. = %d Name = %s Age = %d Address =  %s\n", s[i].r, s[i].name, s[i].age, s[i].address);
    }
}

int display(int n, struct student s[15])
{
    for(int i=0;i<15;i++)
    {
        if(s[i].r==n)
        printf("Roll No. = %d Name = %s Age = %d Address =  %s\n", s[i].r, s[i].name, s[i].age, s[i].address);
        break;
    }
    printf("Invalid Roll No.");
}

int main()
{
    struct student s[15];
    int i;
    for(i=0;i<15;i++)
    {
        printf("Enter Details of %d student\n", i+1);
        scanf("%d%s%d%s", &s[i].r, s[i].name, &s[i].age, s[i].address);   
    }
    iseven(s);
    display(3,s);
}  
