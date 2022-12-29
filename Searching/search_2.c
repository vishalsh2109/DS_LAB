// BINARY SEARCH
#include<stdio.h>
int main()
{
    int n,a[10],ele,f,l,mid,pos,c,i;
    printf("Enter the array size\n");
    scanf("%d", &n);
    printf("Enter the Elements of Array\n");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("Enter the element to be searched\n");
    scanf("%d", &ele);
    f=0;
    l=n-1;
    while(f<=l)
    {
        mid=(f+l)/2;
        if(ele<a[mid])
        {
            l=mid-1;
        }
        else if(ele==a[mid])
        {
            c=1;
            pos=mid+1;
            break;
        }
        else
        {
            f=mid+1;
        }
    }
    if(c==1)
        printf("The element is found at %d position\n",pos);
    else
        printf("NOT FOUND");
        return 0;
}
