#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);

    }
       for(i=0;i<5;i++)
    {
        printf("%d", arr[i]);
        sum=sum+arr[i];
    }
    printf("\n%d", sum);
}
