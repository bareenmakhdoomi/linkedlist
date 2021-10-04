#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node* next;
};
 
void insert(struct node** head, int value)
{
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
  
    new_node->data  = value;
      
    new_node->next = (*head);
 
    (*head)    = new_node;
}
int freq(struct node* start, int item)
{
    struct node* current = start;
    int freq = 0;
    while (current != NULL)
    {
        if (current->data == item)
           freq++;
        current = current->next;
    }
    return freq;
}
int main()
{
    struct node* start = NULL;
    insert(&start, 2);
    insert(&start, 5);
    insert(&start, 1); 
    insert(&start, 2);
    insert(&start, 2);   
    printf("freq of 2 is %d", freq(start,2));   
    return 0;
}
