#include<stdio.h>
# define SIZE 10
int stack[SIZE],top1=-1,top2=SIZE;
int push(int d)
{
    top1++;
    if(top1<top2)
    {
        stack[top1]=d;
        printf("%d ", stack[top1]);
    }
    else
    {
        printf("Overflow ");
    }
    
}
int push2(int d)
{
    top2--;
    if(top1<=top2)
    {
        stack[top2]=d;
        printf("%d ", stack[top2]);
    }
    else
    {
        printf("Overflow ");
    }
}
void main()
{
    int x;
    push(3);
    push(8);
    push(6);
    push2(9);
    push2(3);
    push2(3);
    push2(3);  
    push(6);
    push(5);
}
