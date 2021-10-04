#include<malloc.h>
#include<stdio.h>
#include<string.h>
struct Student
{
    int rollnumber;
    char name;
    int age;
    float marks;
    struct Student *next;
};
 struct student *head;
void insert(int rollnumber, char name, int age, float marks)
{
    
    struct Student *student = (struct Student*) malloc(sizeof(struct Student));
    student->rollnumber = rollnumber;
    student->name=name;
    student->age=age;
    student->marks = marks;
    student->next = NULL;
    if(head==NULL)
	{
        student=head;
    }
    else{
        student->next =head;
        student=head;
    }
    
}
void display()
{
    struct Student *temp;
    while(temp!=NULL){
        
        printf("Roll Number: %d\n",temp->rollnumber);
        printf("Name: %s\n",temp->name);
        printf("Phone: %d\n",temp->age);
        printf("marks: %0.4f\n\n",temp->marks);
        temp = temp->next;
        
    }
}
int main()
{
    head = NULL;
    int choice;
    char name;
    int age;
    int rollnumber;
    float marks;
    printf("Enter roll number: ");
    scanf("%d", &rollnumber);
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%s", age);
    printf("Enter marks: ");
    scanf("%f", &marks);
    insert(rollnumber, name, age, marks);
    display();
}
