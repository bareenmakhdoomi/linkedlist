#include<stdio.h>
int main()
{
	int a,b, x;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	x=a%b;
	printf("modulus of %d and %d is %d",a,b,x);
	return 0;
}
