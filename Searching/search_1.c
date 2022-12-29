// LINEAR SEARCH
#include<stdio.h>
int main()
{
    int n,a[50],i,ele;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elemet to be searched\n");
    scanf("%d", &ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        break;
    }
    printf("Position of element : %d", i+1);
}