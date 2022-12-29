#include<stdio.h>
int main()
{
    int n,i,arr[50],j,t,ele,pos;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the values of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("Enter the element to be inserted\n");
    scanf("%d", &ele);
    printf("Enter theb position of element\n");
    scanf("%d", &pos);
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    for(i=0;i<=n;i++)
    {
        printf("%d", arr[i]);
    }
}