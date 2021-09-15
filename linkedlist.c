#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node n1,n2,n3,n4,n5;
	n1.data=10;//acessing data to node n1
	n2.data=20;//acessing data to node n2
	n3.data=30;//acessing data to node n3
	n4.data=40;//acessing data to node n4
	n5.data=50;//acessing data to node n5
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	n4.next=&n5;
	printf("%d\n",n1.data);
	printf("%d\n",n1.next->data);//acessing node 2 from n1
	printf("%d\n",n1.next->next->data);//acessing node 3 from n1
	printf("%d\n",n1.next->next->next->data);//acessing node 4 from n1
	printf("%d\n",n1.next->next->next->next->data);//acessing node 5 from n1
	return 0;
}
