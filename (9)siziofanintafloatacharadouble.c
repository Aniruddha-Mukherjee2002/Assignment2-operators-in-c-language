#include<stdio.h>
int main()
{
	int x;
	char ch;
	float f;
	double d;
	x=sizeof(int);
	ch=sizeof(char);
	f=sizeof(float);
	d=sizeof(double);
	printf("\n1. size of int is %d\n2. size of char is %c\n3. size of float is %f\n4. size of double is %lf",x,ch,f,d);
	return 0;
	
}