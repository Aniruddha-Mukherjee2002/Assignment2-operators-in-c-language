#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number to check odd or even using bitwise opertor : ");
	scanf("%d",&x);
	if((x)&1)
		printf("it is odd number");
	else
		printf("it is even number");
	return 0;
}