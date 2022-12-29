#include<stdio.h>
#define SIZE 4
int arr[SIZE];
int front=-1;
int rear=-1;
int enqueue(int ele)
{
    if(rear==SIZE-1 && front>0)
    {
        printf("Full");
    }
    else
    {
        if(front==-1)
        front++;
        else
        {
            rear=(rear+1)%SIZE;
            arr[rear]=ele;
            
        }
    }
}
void dequeue()
{
    if(front==-1)
    printf("Empty");
    else
    front=(front+1)%SIZE;
}
int display()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    enqueue(5);
    enqueue(4);
    enqueue(3);
    enqueue(2);
    dequeue();
    dequeue();
    enqueue(1);
    display();

}