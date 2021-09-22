#include<stdio.h>
void del(int a[],int pos,int n);
int main()
{
	int a[10],i,n,pos;
	printf("enter no. of elements of array");
	scanf("%d",&n);
	printf("enter  elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	printf("enter postion of elements of array to be deleted");
	scanf("%d",&pos);
	del(a,pos,n);
	return 0;
}
void del(int a[],int pos,int n)
{
	int i,j,item;
	item==a[pos];
	for(j=pos;j<n;j++);
	{
		a[j]=a[j+1];
	}
	n=n-1;
	printf("elements of array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}

