// INTERPOLATION SEARCH
#include<stdio.h>
int main()
{
    int n,a[10],ele,l,r,i,c;
    printf("Enter the array size\n");
    scanf("%d", &n);
    printf("Enter the Elements of Array\n");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("Enter the element to be searched\n");
    scanf("%d", &ele);
    l=0;
    r=n-1;
    while(l<=r)
    {
        c=l+((r-l)/(a[r]-a[l]))*(ele-a[l]);
        l=l+c;
        if(ele==a[c])
        {
        printf("Found at %d", c+1);
        break;
        }
        else
        {
        c=c+1;
        }
    }
    // for(i=c;i<r;i++)
    // {
    //     if(ele==a[i])
    //     printf("%d",i+1);
    // }

    

}
