#include<stdio.h>
int main()
{
    int n,arr[100],element,pos,c,k=0,arr2[200],a;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for(c=0;c<n;c++)
    {
        scanf("%d", &arr[c]);
    } 
    printf("Enter the element to be added\n");
    scanf("%d", &element);
    printf("Enter the position\n");
    scanf("%d", &pos);
    // for(c=n-1;c>=pos-1;c--)
    // {
    //    arr[c+1]=arr[c]; 
    // }
    // arr[pos-1]=element;
    // for ( c = 0; c <= n; c++)
    // {
    //     printf("%d", arr[c]);
    // }
    for(c=0;c<pos-1;c++)
    {
        arr2[k]=arr[c];
        k++;
    }
    arr2[k]=element;
    k++;
    for(c=pos;c<=n;c++)
    {
        arr2[k]=arr[c-1];
        k++;
    }
    for(a=0;a<n+1;a++)
    {
        printf("%d", arr2[a]);
    }
}
