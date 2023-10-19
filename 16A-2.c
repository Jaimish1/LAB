#include <stdio.h>
void main()
{
	int a[3][3],i,j,n,m,l;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Elemet[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				n++;
			}
			else if(a[i][j]>0)
			{
				m++;
			}
			else
			{
				l++;
			}
		}
	}
	printf("Number of positive=%d, negative=%d and zero=%d",m,l,n);
}
