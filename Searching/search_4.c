// JUMP SEARCH
#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[10],ele,f,l,i,h;
    printf("Enter the array size\n");
    scanf("%d", &n);
    printf("Enter the Elements of Array\n");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("Enter the element to be searched\n");
    scanf("%d", &ele);
    l=0;
    h=sqrt(n);
    while(a[h]<ele && l<n)
    {
        l=h;
        h=h+sqrt(n);
        if(h>n-1)
        h=n;
    }
    for(i=l;i<h;i++)
    {   
        if(a[i]==ele)
        printf("Element found at %d positiion", i+1);
    }
}
