#include<stdio.h>
int main()
{
	int x=2345;
	printf("Value of x is %d",x);
	printf("\nAfter storing the last digit of x, x's new value is %d",x=x/10*10);
	return 0;
}