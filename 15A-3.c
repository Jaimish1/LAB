#include <stdio.h>
void main()
{
	int n,i;
	printf("How many numbers you want to insert: ");
	scanf("%d",&n);
	int a[n],c=0;
	for(i=0;i<n;i++)
	{
		printf("Enter element [%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%3==0)
		{
			c++;
		}
	}
	printf("Numbers are devisile by 3=%d",c);
}
