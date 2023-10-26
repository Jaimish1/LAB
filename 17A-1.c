//Print value and address of a variable
#include <stdio.h>
void main()
{
	int a,*p;
	printf("Enter variable");
	scanf("%d",&a);
	p=&a;
	printf("Address of variable is: %d\n",p);
	printf("Value of variable is: %d",*p);
}
