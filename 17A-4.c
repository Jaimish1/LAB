//Swap value of two numbers using pointer.
#include <stdio.h>
void main()
{
	int a,b,*p1,*p2,t;
	
	printf("\nEnter two numbers : ");
    scanf("%d %d", &a, &b);
    p1=&a, p2=&b;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
    
    printf("a = %d  b = %d", *p1, *p2);
}
