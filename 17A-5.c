//Store n elements in an array and print the elements using pointer.
#include <stdio.h> 
 
void main() 
{ 
    int n,i; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
 
    int arr[n]; 
    printf("Enter %d elements: \n", n); 
    for (i = 0; i < n; i++) 
	{ 
        scanf("%d", &arr[i]); 
    } 
 
    printf("Elements in the array: "); 
    for (i = 0; i < n; i++) 
	{ 
        printf("%d ", *(arr + i)); 
    } 
} 
