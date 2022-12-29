#include<stdio.h>
int main()
{
    int n,i,j,k,a[50],pos,b[50];
    printf("enter the size of array\n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nActual array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter the position of elelment to be deleted\n");
    scanf("%d", &pos);
    i=0;
    for(j=0;j<pos-1;j++)
    {
        b[j]=a[i];
        i++;
    }
    i=pos;
    while(i<n)
    {
        b[j]=a[i];
        j++;
        i++;
    }
    for(j=0;j<n-1;j++)
    {
        printf("%d  ", b[j]);
    }
}