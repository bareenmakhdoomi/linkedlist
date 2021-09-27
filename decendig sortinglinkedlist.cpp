#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head,*tail;
void create()
{
	int n,i;
	struct node *temp;
	printf("enter number of nodes to be created ");
     	scanf("%d",&n);
     	for(i=0;i<n;i++)
     	{
     		temp=(struct node*)malloc(sizeof(struct node));
     		printf("enter data");
     	    scanf("%d",&temp->data);
     	    temp->next=NULL;
     	    if(head==NULL)
     	    {
			head=temp;
     	    tail=temp;
			 }
			 else
			 {
			 	tail->next=temp;
			 	tail=temp;
			 }
	
		 }
	}
	void sorting()
	{
		struct node *ptr,*cptr;
		int temp;
		ptr=head;
		while(ptr->next!=NULL)
		{
			cptr=ptr->next;
			while(cptr!=NULL)
			{
				if(ptr->data<cptr->data)
				{
				temp=ptr->data;
				ptr->data=cptr->data;
				cptr->data=temp;	
				}
				cptr=cptr->next;
			}
			ptr=ptr->next;
	}
}
	void view()
	{
		struct node *t;
		t=head;
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
	}
int main()
{
	create();
	printf("\nlist before sorting is:\n");
	view();
	sorting();
	printf("\nlist after sorting is:\n");
	view();
	return 0;
}
