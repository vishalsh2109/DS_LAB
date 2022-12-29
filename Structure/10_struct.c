#include<stdio.h>
struct bank
{
 int account_no;
 char name[20];
 int balance;
};

int less_than_200(struct bank b[4])
{
    int i;
    for(i=0;i<4;i++)
    {
        if(b[i].balance < 200)
        printf("Roll No. = %d Name = %s Age = %d\n", b[i].account_no, b[i].name, b[i].balance);
    }
}

int increment(struct bank b[4])
{
    for(int i=0;i<4;i++)
    {
        if(b[i].balance >= 1000)
        printf("Account No. = %d Name = %s Balance = %d\n", b[i].account_no, b[i].name, b[i].balance+100);
    }
}

int main()
{
    struct bank b[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter Details of %d Customer\n", i+1);
        scanf("%d%s%d", &b[i].account_no, b[i].name, &b[i].balance);   
    }
    less_than_200(b);
    increment(b);
}  
