#include<stdio.h>
int main()
{
    int i,j,k,a[50],b[500],n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe actual array is :");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nThe reversed array is :");
    i=0;
    for(j=n-1;j>=0;j--)
    {
        b[j]=a[i];
        i++;
    }
    for(j=0;j<n;j++)
    {
        printf("%d ", b[j]);
    }





}