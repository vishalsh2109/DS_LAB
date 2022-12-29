#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],n,m,p,q,i,j,k;
    printf("Enter the order of Matrix 1\n");
    scanf("%d%d", &m,&n);
    printf("Enter the order of Matrix 2\n");
    scanf("%d%d", &p,&q);
    if(n==p)
    {
        printf("Enter the elements of Matrix 1\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of Matrix 2\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("MULTIPLICATED MATRIX:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<p;k++)
                {
                 c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }

}
