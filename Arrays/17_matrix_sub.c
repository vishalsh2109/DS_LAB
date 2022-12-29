#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],n,m,i,j,p,q;
    printf("Enter the order\n");
    scanf("%d%d", &n,&m);
    printf("Enter the elements of Matrix 1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Display Matrix 1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t", a[i][j]);
        }
            printf("\n");
    }
     printf("Enter the elements of Matrix 2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Display Matrix 2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t", b[i][j]);
        }
            printf("\n");
    }
    printf("Sum Of Mat1 and Mat2:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d\t", c[i][j]);
        }
            printf("\n");
    }


}
