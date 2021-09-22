#include<stdio.h>
int modulus(int,int);
int main()
{
	int a,b, x;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	x=modulus(a,b);
	printf("modulus of %d and %d is %d",a,b,x);
	return 0;
}
int modulus(int a,int b)
{
	int x;
	x=a%b;
	return x;
}
