#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,m,n,a[50][50],det;
    printf("Enter the order of matrix");
    scanf("%d%d", &m, &n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    det=(a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]))-(a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]))+(a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]));
    printf("%d", det);
}

