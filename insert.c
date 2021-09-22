#include <stdio.h>
#include<conio.h>
int insert(int size,int arr[],int pos,int num);
void display(int arr[],int size);
int main()
{
    int arr[100], i, size, num, pos;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
    insert(size,arr,pos,num);
    display(arr,size);
    return 0;
}
int insert(int size,int arr[],int pos,int num)
{
	int i;
	 for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = num;
        size++; 
        return arr[i];
}
void display(int arr[],int size)
{
        int i;
	    printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t",arr[i]);
        }
}
