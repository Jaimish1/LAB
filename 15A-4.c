#include <stdio.h>
void main()
{
	int n,i,x;
	printf("How many elemets you want to insert: ");
	scanf("%d",&n);
	int a[n],c=0;
	for(i=0;i<n;i++)
	{
		printf("Enter element [%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Which element you want to find : ");
	scanf("%d",&x);
	printf("Asked element is: %d",a[x]);
}
