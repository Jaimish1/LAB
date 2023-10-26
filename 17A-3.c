//Calculate sum of two numbers using pointer.
#include <stdio.h>
void main() 
{
	int *ptr1, *ptr2 ,a ,b;
	int num;
 
	printf("\nEnter two numbers : ");
	scanf("%d %d", &a, &b);
 
	ptr1=&a, ptr2=&b;
	num = *ptr1 + *ptr2;
 
	printf("Sum = %d", num);
}

