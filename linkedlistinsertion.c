#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node NODE;
struct node *start;
void traverse();
void insertAtEnd(int data);
void insertAtSpecificPos(int item,int loc);
void insertAtBegin(int data);
int main()
{
	int ch,item,loc;
	printf("enter 1 to insert element at begining\n"); 
	printf("enter 2 to insert element at end\n");
	printf("enter 3 to insert element at specific position\n");
	printf("enter 4 to traverse the list\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:	printf("enter the item \n");
		scanf("%d",&item);
		insertAtBegin(item);
		break;
		case 2:	printf("enter the item \n");
		scanf("%d",&item);
		insertAtEnd(item);
		break;
		case 3:	printf("enter the item \n");
		scanf("%d",&item);
		printf("enter the loction \n");
		scanf("%d",&loc);
		
		insertAtSpecificPos(item,loc);
		break;
		case 4:	printf("traverse the list \n");
		void traverse();
		break;
		default:printf("wrong choice!");
		
	}
	return 0;
}
void insertAtBegin(int item)
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p -> data=item;
	if(start==NULL)
	p->next=NULL;
	else
	{
		p->next=start;
		start=p;
	}
}
void insertAtEnd(int item)
{
	
	struct node *p,*loc;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=item;
	p->next=NULL;
	if(start==NULL)
	{
		start=p;
	}
	else{
		loc=start;
		while(loc->next!=NULL);
		{
		loc=loc->next;
		}
		loc->next=p;
	}
}
void insertAtSpecificPos(int item,int loc)
{
	struct node *p,*temp;
	int k;
	for(k=0,temp=start;k<loc;k++)
	{
		temp=temp->next;
		}
    p=(struct node*)malloc(sizeof(struct node));
	p->data=item;
	p->next=start->next;
	start->next=p;
}
void traverse()
{
	struct node *p;
 p=start;
 while(p!=NULL)
 {
 	printf("%d\n",p->next);
 	p=p->next;
 }
}

  
