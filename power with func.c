#include<stdio.h>
#include<math.h>
int power(int x, unsigned int y);
int main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("power is :",power(a, b));
    return 0;
}
int power(int a, unsigned int b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
    {
    	int x= power(a, b/ 2) * power(a, b / 2);
        printf("%d",x);
	}
        
    else{
    	int y=a * power(a, b / 2) * power(a, b / 2);
       printf("%d",y);
	}
}
