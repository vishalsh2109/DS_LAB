#include<stdio.h>
#include<string.h>
#define SIZE 20
char number[SIZE],item[SIZE];
int top =-1;
int push(int n)
{
    if(top==SIZE-1)
    printf("Overflow");
    else
    {
        top++;
        number[top]=n;
    }
}
int pop()
{
    int i;
    if(top==-1)
        printf("Undeflow");
    else
    {
        item[i]=number[top];
        top--;
        i++;
    }
}
int main()
{
    int i,j,k,n;
    char num[20];
    printf("Enter any number");
    gets(num);
    for(i=0;i<strlen(num);i++)
    {
        int y=num[i];
        push(y);
    }
    while(top!=-1)
    {
        pop();
    }

    if (strcmp(num,item)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}