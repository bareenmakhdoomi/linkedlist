#include<stdio.h>
#include<malloc.h>
void create();
void view();
struct node
{
	char data;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;
int main()
{
     	printf("values of linked list\n");
     	create();
     	view();
    return 0;
}
//code for create function
void create()
{
	int n,i;
	struct node *temp;
	printf("enter number of nodes to be created ");//asking for number of nodes from user
     	scanf("%d",&n);
     	for(i=0;i<n;i++)//storing data in memory
     	{
     		temp=(struct node*)malloc(sizeof(struct node));//malloc allocates sizeof(struct node) bytes, and returns a void pointer to it, which we cast to struct node*
     		printf("enter data");
     	    scanf("%d",&temp->data);
     	    if(temp->data%2==0)
     	    {
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
