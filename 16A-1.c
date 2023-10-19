//Read values in two-dimensional array and print them in matrix form
#include <stdio.h>
void main()
{
	int i,j,n,m;
	printf("Enter number of ROWS: ");
	scanf("%d",&m);
	printf("Enter number of COLOMS: ");
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter Elemet[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
}
