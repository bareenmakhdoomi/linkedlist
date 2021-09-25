#include<stdio.h>
#include<malloc.h>
void create();
void view();
void insertAtSpecificPos();
void Delete();

struct node
{
	char data;
	struct node *next;
};
struct node *head=NULL,*tail=NULL;
int main()
{
	
     int ch;
     	printf("1 for create\n 2 for view\n 3 for insert\n4 for delete\n");//asking for users choice
     	printf("enter your choice");
     	scanf("%c",&ch);
     	switch(ch)
		 {
     		case '1':create();//caliing create function
     		    break;
     		case '2':view();//caliing view function
     		    break;
     		case '3':insertAtSpecificPos();//caliing view function
     		    break;
     		case '4':Delete();  //caliing view function
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
     	for(i=0;i<n;i++)//storing data in memory
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
	void insertAtSpecificPos()
{
	struct node *p,*temp;
	int k ,item,loc;
	create();
	printf("enter item to be inseted\n");
	scanf("%d",&item);
	printf("enter location of  item to be inseted\n");
	scanf("%d",&loc);
	for(k=0,temp=head;k<loc;k++)
	{
		temp=temp->next;
		}
    p=(struct node*)malloc(sizeof(struct node));
	p->data=item;
	p->next=head->next;
	head->next=p;
    view();
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
//code for delete function
  void Delete()
   {
      struct node *trav,*prev;
	  int item;
	  create();
	  printf("enter node to be deleted");
	  scanf("%d",item);
	  if(head->data==item)
	  {
	  	trav=head;
	  	head=head->next;
	  	free(trav);
	  }
	  else
	  {
	  	trav=head;
	  	while(trav->data!=item)
	  	{
	  	prev=trav;
		  trav=trav->next;	
		}
		prev->next=trav->next;
		if(trav==tail)
		tail=prev;
		free(trav);
	  }
	  view();	
}
