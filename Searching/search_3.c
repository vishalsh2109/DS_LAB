// Ternary search
#include<stdio.h>
int main()
{
    int n,i,a[100],j,k,ele,l,f,mid1,mid2,pos,c;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("ENTER THE ELEMENT TO BE SEARCHED\n");
    scanf("%d", &ele);
    f=0;
    l=n-1;
    while(f<=l)
    {
       mid1=f+(l-f)/3;
       mid2=l-(l-f)/3;
       if(ele<a[mid1])
       l=mid1-1;
       else if(ele>a[mid2])
       f=mid2+1;
       else if(ele>a[mid1] && ele<a[mid2])
       {
       f=mid1+1;
       l=mid2-1;
       }
       else if(ele==a[mid1])
       {
        c=1;
        pos=mid1+1;
        break;
       }
       else if(ele==a[mid2])
       {
        c=1;
        pos=mid2+1;
        break;
       }
    }
    if(c==1)
    printf("Element found at %d position", pos);
    else
    printf("Not found");

}