#include<iostream>
using namespace std;
#define SIZE 10
int arr[SIZE];
int top=-1;
void push(int n)
{
    if(top==SIZE-1)
    cout<<"Overflow"<<endl;
    else
    {
        top++;
        arr[top]=n;
    }
}
int push()
{
    int item;
    if(top == -1)
    cout<<"Underflow"<<endl;
    else
    item = arr[top];
    top--;
    return item;
}
int main()
{
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
    push(5);
}
