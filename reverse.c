#include<stdio.h>
int main()
{

int arr[10];
int i;
printf("enter elements of array \n");
for(i = 0; i < 10; i++)
{
scanf("%d",&arr[i]);
}
printf("Reversed array is:\n");
for(i=10-1;i>=0;i--)
{
printf("%d\n",arr[i]);
}
return 0;
}
