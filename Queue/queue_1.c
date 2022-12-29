#include<stdio.h>
#include<stdlib.h>
# define SIZE 10
int queue[SIZE];
int front=-1;
int rear=-1;
void enqueue(int val)
{
    if(rear==SIZE-1)
    printf("Full");
    else
    {
        rear++;
        queue[rear]=val;
        if(front==-1)
        {
            front=0;
        }
    }
}
int dequeue()
{
    if(front==-1)
    printf("Empty");
    else
    {
        front++;
        return 0;
    }
}
void display()
{
    if(front<=rear)
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d", queue[i]);
        }
    }
    else if(front==rear+1)
    printf("No elements in the queue");
    else 
    printf("Element not found");
}
int main()
{
    enqueue(5);
    enqueue(4);
    dequeue();
    dequeue();
    dequeue();
    display();
}
