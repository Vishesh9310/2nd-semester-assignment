// write a C program to implement a stack using linked list.
#include <stdio.h>
#include <stdlib.h>

// Structure to create a node with data and the next pointer
struct node {
    int info;
    struct node *ptr;
}*top,*top1,*temp;

int count = 0;
// Push() operation on a  stack
void push(int data) {
     if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
    printf("Node is Inserted\n\n");
}

int pop() {
     top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack Underflow\n");
        return -1;
    }
    else
        top1 = top1->ptr;
    int popped = top->info;
    free(top);
    top = top1;
    count--;
    return popped;
}

void display() {
    // Display the elements of the stack
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }
    
    printf("The stack is \n");
    while (top1 != NULL)
    {
        printf("%d--->", top1->info);
        top1 = top1->ptr;
    }
    printf("NULL\n\n");

}

int main() {
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("Popped element is :%d\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}

/*
#include<stdio.h>
#include<stdlib.h>

#define max 100
int stack[max];
int top=-1;

struct node{
    int data;
    struct node *next;
};

//int *head=head;//demo head= real head of linked list

void push();
void pop(struct node *node);

int main(){
    int choice;
    
    while(1){
        printf("Enter choice:\n1) for push\n2) for pop\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop(head);
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }

    
    return 0;
}

void push(){
    int value;
    if(top==max-1){
        printf("Overflow");
    }else{
        printf("Enter data:");
        scanf("%d",&value);
        top++;
        node->data=value;
        node->next=NULL;
    }
}

void pop(struct node *node){
    if(top==-1){
        printf("Underflow");
    }else{
        while(node!=NULL){
            printf("%d\n",node->data);
            node=node->next;
        }
    }
}
*/