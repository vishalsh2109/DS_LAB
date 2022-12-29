#include<stdio.h>
int main()
{
    int arr[5],i,j,f[5],v=-1;
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);

    }
       for(i=0;i<5;i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        int c=1;
        for(j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
            c++;
            f[j]=v;
            }}
            if(f[i]!=v)
            {
            f[i]=c;
            }
        }
        for(i=0;i<5;i++)
        {
            if(f[i]!=v)
            printf("%d", f[i]);
        }
    } 
