#include<stdio.h>
int main()
{
	int x=25,y=50;
	printf("\nValue of x=%d and y=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nAfter swapping without using third variable x=%d and y=%d",x,y);
	return 0;
	
}