#include <stdio.h>
int Stack[100];
int top = -1;
void push(int x) 
{
    top++;
    Stack[top] = x;
}
void pop() 
{
   top--;
}
void decimalToBinary(int num,int base) 
{
   if (num == 0) 
   {
      printf("0");
      return;
   }
   while (num > 0) 
   {
      push(num % base);
      
      num /= base;
   }
   while (top != -1) 
   {
      if(Stack[top]<10)
      printf("%d", Stack[top]);
      else if(Stack[top]==10)
      printf("A");
      else if(Stack[top]==11)
      printf("B");
      else if(Stack[top]==12)
      printf("C");
      else if(Stack[top]==13)
      printf("D");
      else if(Stack[top]==14)
      printf("E");
      else if(Stack[top]==15)
      printf("F");

      pop();
   }
}
int main() {
   int num,base;
   printf("enter the number");
   scanf("%d", &num);
   printf("Enter the base");
   scanf("%d", &base);
   decimalToBinary(num,base);
   return 0;
}