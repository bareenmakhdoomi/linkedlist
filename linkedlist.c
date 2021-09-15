#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node n1,n2,n3,n4,n5;
	n1.data=10;
	n2.data=20;
	n3.data=30;
	n4.data=40;
	n5.data=50;
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	n4.next=&n5;
	printf("%d\n",n1.data);
	printf("%d\n",n1.next->data);
	printf("%d\n",n1.next->next->data);
	printf("%d\n",n1.next->next->next->data);
	printf("%d\n",n1.next->next->next->next->data);
	printf("%d\n",n1.next->next->next->next->next->data);
	return 0;
}
