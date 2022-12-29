#include<stdio.h>
struct bank
{
 int how;
 char name[20];
 float salary;
};

int total_salary(struct bank b[4])
{
    float y[4];
    for(int i=0;i<4;i++)
    {
        y[i]= (float)b[i].how/8;
        printf("Hours of Work = %d Name = %s salary = %f\n", b[i].how, b[i].name, (b[i].salary+(y[i]*50)));
    }
}

int main()
{
    struct bank b[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter Details of %d Employee\n", i+1);
        scanf("%d%s%f", &b[i].how, b[i].name, &b[i].salary);   
    }
    total_salary(b);
}  
