#include<stdio.h>
int main()
{
    int i,j,k,n,a[2][2][2],m,q;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &q);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<q;k++)
            {
                 scanf("%d", &a[i][j][k]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<q;k++)
            {
                 printf("%d ", &a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}