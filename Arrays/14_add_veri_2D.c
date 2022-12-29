#include<stdio.h>
int main()
{
    int i,j,k,n,a[3][2],m,*p;
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            p=&a[i][j];
            printf("%d %d ", p, *p);
        }
        printf("\n");
    }
}