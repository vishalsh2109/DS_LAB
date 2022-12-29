#include<stdio.h>
int combine(int a[], int l, int mid, int h)
{

    int i=l;
    int j=mid+1;
    int k=l;
    int b[100],n;
    while(i<j && j<=h)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }

    while(j<=h)
    {
        b[k]=a[j];
        k++;
        j++;
    }

    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }

    
}
int merge_sort(int a[], int l, int h)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,h);
        combine(a,l,mid,h);
    }

    return 0;
}


int main()
{
    int a[100],i,j,l,h,mid,n,k,b[100];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    l=0;
    h=n-1;
    merge_sort(a,l,h);
    for(k=0;k<n;k++)
    {
        printf("%d", b[k]);
    }
}
