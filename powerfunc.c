#include <stdio.h>
int power(int,int);
int main() 
{
    int a, b,result=1;
    printf("Enter a base number: ");
    scanf("%d", &a);
    printf("Enter an exponent: ");
    scanf("%d", &b);
    result=power(a,b);
	 printf("Answer = %d", result);
    return 0;
}
int power(int a,int b)
{
    int	result=1,i=1;
	  while (i<=b)
   {
        result=result* a;
        i++;
    }
    return result;
}
