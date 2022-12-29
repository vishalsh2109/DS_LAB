//SELECTION 
#include<stdio.h>
int selection_sort(int n,int a[])
{
    int t,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
        printf("Sorted Array is:\n");
        for(i=0;i<n;i++)
            printf("%d\n", a[i]);
}
int main()
{
    int n,i,a[100];
     printf("enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    selection_sort(n,a);
}
