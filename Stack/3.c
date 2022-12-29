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
void decimalToBinary(int num) 
{
   if (num == 0) 
   {
      printf("0");
      return;
   }
   while (num > 0) 
   {
      push(num % 8);
      
      num /= 8;
   }
   while (top != -1) {
      printf("%d", Stack[top]);
      pop();
   }
}
int main() {
   int num;
   scanf("%d", &num);
   decimalToBinary(num);
   return 0;
}