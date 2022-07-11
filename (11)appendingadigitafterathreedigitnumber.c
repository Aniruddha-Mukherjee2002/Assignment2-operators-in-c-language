#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a three digit number : ");
	scanf("%d",&x);
	printf("\nEnter a single digit number to append :");
	scanf("%d",&y);
	printf("\nAfter appending new value of x is %d",x=x*10+y);
	return 0;
	
}