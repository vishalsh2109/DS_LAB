#include<stdio.h>
void main()
{
    int n,m,i,j,a[10][10],b[10][10];
    printf("Enter the order\n");
    scanf("%d%d", &m,&n);
    if(m<10 && n<10)
    {
      printf("Enter the elements\n");
      for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
      }
     printf("Transpose Matrix\n");
     for(i=0;i<m;i++)
      {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
            printf("%d", b[i][j]);
        }
        printf("\n");
      }
   }
}
