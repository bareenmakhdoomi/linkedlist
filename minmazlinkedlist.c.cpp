
#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *next;
};

struct node *create_list(struct node *start);
void display(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
int maximum(struct node *start);
int minimum(struct node *start);

int main()
{
        struct node *start=NULL;
        int n;

        start=create_list(start);
        display(start);
        printf("\nmaximum element is %d\n",maximum(start));
        printf("\nminimum element is %d\n",minimum(start));

        return 0;

}


int maximum(struct node *ptr)
{
        int large=ptr->data;
        while(ptr!=NULL)
        {
                if(ptr->data>large)
                        large = ptr->data;
                ptr=ptr->next;
        }
        return large;
}

int minimum(struct node *ptr)
{
        int small=ptr->data;
        while(ptr!=NULL)
        {
                if(ptr->data< small)
                        small = ptr->data;
                ptr=ptr->next;
        }
        return small;
}

struct node *create_list(struct node *start)
{
        int i,n,data;
        printf("Enter the number of nodes : ");
        scanf("%d",&n);
        start=NULL;
        if(n==0)
                return start;

        printf("\nEnter the element to be inserted : ");
        scanf("%d",&data);
        start=addatbeg(start,data);

        for(i=2;i<=n;i++)
        {
                printf("Enter the element to be inserted : ");
                scanf("%d",&data);
                start=addatend(start,data);
        }
        return start;
}

void display(struct node *start)
{
        struct node *p;
        if(start==NULL)
        {
                printf("\nList is empty\n");
                return;
        }
        p=start;
        printf("\nList is :\n");
        while(p!=NULL)
        {
                printf("%d ",p->data);
                p=p->next;
        }
}

struct node *addatbeg(struct node *start,int data)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->data=data;
        tmp->next=start;
        start=tmp;
        return start;
}

struct node *addatend(struct node *start,int data)
{
        struct node *p,*tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->data=data;
        p=start;
        while(p->next!=NULL)
                p=p->next;
        p->next=tmp;
        tmp->next=NULL;
        return start;
}
