#include<stdio.h>
int main()
{
    int n,a[50],b[50],i,j,k,sum,total;
    printf("Enter the size of array");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Actual array is: ");
    sum=0;
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
        sum=sum+a[i];
    }
    n++;
    total=n*(n+1)/2;
    printf("\nYour missing number is %d", total-sum);




}
