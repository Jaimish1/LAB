//Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n).
#include<stdio.h>
void main(){
	int i,n,j,s=0;
	printf("enter a no.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		s=s+j;
		}
    }
    printf("%d",s);
}
