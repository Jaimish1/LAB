//Perform Addition of two matrices.
#include <stdio.h>
void main()
{
	int i,j,n,m;
	printf("Matrix 1\n");
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
	printf("Matrix 2\n");
	printf("Enter number of ROWS: ");
	scanf("%d",&m);
	printf("Enter number of COLOMS: ");
	scanf("%d",&n);
	int b[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter Elemet[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=a[i][j]+b[i][j];
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
}
