#include<stdio.h>
int main()
{
    int i,j,n,m,arr1[100],arr2[100];
	printf("Enter the size of array 1\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of array 2\n");
    scanf("%d", &m);
    printf("Enter the elements\n");
    for(j=0;j<m;j++)
    {
        scanf("%d", &arr2[j]);
    }
    printf("\nSymmetric set difference :");
    i=0;j=0;
	while (i < n && j < m) 
    {
		if (arr1[i] < arr2[j]) 
        {
			printf("%d ", arr1[i]);
			i++;
		}
		else if (arr2[j] < arr1[i]) 
        {
			printf("%d ", arr2[j]);
			j++;
		}
		else 
        {
			i++;
			j++;
		}
	}
	while (i < n) 
    {
		printf("%d", arr1[i]);
		i++;
	}
	while (j < m)
    {
		printf("%d", arr2[j]);
		j++;
	}

	return 0;
}
