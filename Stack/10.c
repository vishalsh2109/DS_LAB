#include<stdio.h>
#include<stdlib.h>      
#include<ctype.h>     
#include<string.h>
#include<math.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char item)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}

int pop()
{
	int item ;

	if(top <0)
	{
		printf("stack under flow: invalid postfix expression");
		getchar();
		exit(1);
	}
	else
	{
		item = stack[top];
		top = top-1;
		return(item);
	}
}

int main()
{
    char a[20], *p, num,x,y,result,u;
    gets(a);
    p=a;
    while(*p!='\0')
    {
        if(isdigit(*p))
        {
            num = *p-48;
            push(num);
        }
        else if(*p==' ')
        {
            continue;
        }
        else
        {
           x=pop();
           y=pop();
           switch(*p)
           {
            case '+': 
            result = x+y;
            break;
            case '-': 
            result =x-y;
            break;
            case '*': 
            result = x*y;
            break;
            case '/': 
            result = x/y;
            break;
           }
           push(result);
        }
        *p++;
    }
    u=pop();
    printf("%d", u);
}