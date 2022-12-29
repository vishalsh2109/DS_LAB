#include<stdio.h>
int main()
{
    int n,m,i,arr1[n],j,k,arr2[m],c[m+n];
    printf("enter the size of array 1\n");
    scanf("%d", &n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the size of array 2\n");
    scanf("%d", &m);
    printf("Enter the elements");
    for(j=0;j<m;j++)
    {
        scanf("%d", &arr2[j]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n && j<m)
    {
        if(arr1[i]>arr2[j])
        {
            c[k]=arr2[j];
            j++;
            k++;
        }
        else
        {
            c[k]=arr1[i];
            i++;
            k++;
        }
    }
    while(i<n)
    {
        c[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m)
    {
        c[k]=arr2[j];
        j++;
        k++;
    }
    for(k=0;k<(m+n);k++)
    {
        printf("%d", c[k]);
    }
}