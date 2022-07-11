#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter a three digit number : ");
	scanf("%d",&x);
	y=x%10;
	x=x/10;
	z=x%10;
	y=y*10+z;
	x=x/10;
	x=x%10;
	y=y*10+x;
	printf("After rotating the three digit value is %d",y);
	return 0;
}