#include <stdio.h>
void main()
{
	char a[100];
	printf("Enter string: ");
	gets(a);
	int i,c=0;
	printf("String is: %s\n",a);
	for(i=0;a[i]!=0;i++)
	{
		c++;
	}
	printf("Lenght of screen is: %d",c);
}
