#include<stdio.h>
int main()
{
	int x,mod1,mod2,mod3;
	printf("Enter a three digit number : ");
	scanf("%d",&x);
	mod1=x%10;
	x=x/10;
	mod2=x%10;
	x=x/10;
	mod3=x%10;
	printf("\nSum of entered three digit number is %d",mod1+mod2+mod3);
	return 0;
	
}