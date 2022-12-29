#include<stdio.h>
int main()
{
    int n,m,i,arr1[50],j,k,arr2[50],c[50],r;
    char y;
    printf("Enter 1 for A-B\n");
    printf("Enter 2 for B-A\n");
    scanf("%c", &y);
    switch (y)
    {
    case '1':printf("enter the size of array 1\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the size of array 2\n");
    scanf("%d", &m);
    printf("Enter the elements\n");
    for(j=0;j<m;j++)
    {
        scanf("%d", &arr2[j]);
    } 

    printf("Difference :");    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j])
            break;
        }
        if(j==m)
        {
            printf("%d ", arr1[i]);
        }
    }               
        break;
    case '2':printf("enter the size of array 2\n");
    scanf("%d", &n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the size of array 1\n");
    scanf("%d", &m);
    printf("Enter the elements");
    for(j=0;j<m;j++)
    {
        scanf("%d", &arr2[j]);
    } 

    printf("Difference :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j])
            break;
        }
        if(j==m)
        {
            printf("%d ", arr1[i]);
        }
    }               
        break;
        default: printf("Invaid");
    }
}
