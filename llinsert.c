#include<stdio.h>
#include<malloc.h>
void create();
void view();
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;
int main()
{
	
     int ch;
     	printf("1 for create\n 2 for view\n");//asking for users choice
     	printf("enter your choice");
     	scanf("%c",&ch);
     	switch(ch)
		 {
     		case '1':create();//caliing create function
     		    break;
     		case '2':view();//caliing view function
     		    break;
			default:printf("wrong choice!");
		 }
    return 0;
}
//code for create function
void create()
{
	int n,i;
	struct node *temp;
	printf("enter number of nodes to be created ");//asking for number of nodes from user
     	scanf("%d",&n);
     	for(i=1;i<n;i++)//storing data in memory
     	{
     		temp=(struct node*)malloc(sizeof(struct node));//malloc allocates sizeof(struct node) bytes, and returns a void pointer to it, which we cast to struct node*
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
			 i=i+1;
		 }
	}
//code for view function
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
