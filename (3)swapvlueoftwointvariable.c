#include<stdio.h>
int main()
{
	int x=25,y=50,c;
	printf("\n     value of x=%d and value of y=%d",x,y);
	c=x;
	x=y;
	y=c;
	printf("\n     After swapping between x and y x=%d and y=%d",x,y);
	return 0;
}