
#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct node {
    int data;          
    struct node *next; 
};
struct node *head,*tail;
void create();
void deleteList();
void displayList();
int main()
{
    create();
     printf("Data in the list \n");
     displayList();

    printf(" deleteing all instances of the list:\n ");
    deleteList();
    printf("Data in the list \n");
    displayList();
     return 0;
}
void create()
{
	int n,i;
	struct node *temp;
	printf("enter number of nodes to be created ");
     	scanf("%d",&n);
     	for(i=1;i<n;i++)
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

void deleteList()
{
    struct node *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;

        free(temp);
    }

    printf("SUCCESSFULLY DELETED ALL INSTANCES OF LINKED LIST\n");
}
void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}
