#include<stdio.h>
#define SIZE 10
struct queue
{
    int queue1[SIZE];
    int front;
    int rear;
};
void create(struct queue a)
{
    a.front=-1;
    a.rear=-1;
}
int enqueue(struct queue a,int val)
{
     if(a.rear==SIZE-1)
    printf("Full");
    else
    {
         if(a.front==-1)
        {
            a.front=0;
        }
        a.rear++;
        a.queue1[a.rear]=val;
        printf("%d", a.queue1[a.rear]);
    }
}
int dequeue(struct queue a)
{
    if(a.front==-1)
    printf("Empty");
    else
    a.front++;
}
void main()
{
    // int val;
    struct queue s;
    create(s);
    enqueue(s,23);
    enqueue(s,34);
}
