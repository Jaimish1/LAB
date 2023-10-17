#include <stdio.h>
void main()
{
	char a[100],b[100];
	printf("Enter string 1:");
	gets(a);
	printf("Enter string 2:");
	gets(b);
	int i=0;
	for(i=0;i<=1;i++)
	{
		a[i]=b[i];
	}
	printf("String is :%s",a);
}
