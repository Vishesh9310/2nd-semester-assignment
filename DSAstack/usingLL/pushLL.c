#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int size=5;
// int arr[5];
int top=-1;

void push(struct node *node);
void pop();
void tops();
void exit(int);
void print(struct node *node);
void isempty();
void isfull();



// void makenode(){
//     while(1){
//         struct node *node[i];
//         node[i]=(struct node*)malloc(sizeof(struct node));
        
//         break;
//     }
// }

int main(){
    /*
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));

    head->data=1324;
    head->next=first;
    first->data=6453;
    first->next=second;
    "
    "
    fourth->data=5342;
    fourth->next=NULL;
    */
    int value;
    struct node *head=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&value);
    head->data=value;
    head->next=NULL;
    top++;
    struct node *point=(struct node*)malloc(sizeof(struct node));
    point = head;

    int choice;
    while(1){
        printf("Enter choice:\n1: for push\n2: for pop\n3: for print\n4: for exit\n5: for isempty\n6: for isfull\n7: for top\n\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            push(point);
            break;
        case 2:
            pop();
            break;
        case 3:
            print(head);
            break;
        case 4:
            exit(0);
            break;
        case 5:
            isempty();
            break;
        case 6:
            isfull();
            break;
        case 7:
            tops();
            break;
        default:
            printf("Invalid choice");
        }
    }

    return 0;
}

void push(struct node *node){
    int valuedata;
    

    if(top==size-1){
        printf("Overflow\n");
    }else if(top==-1){
        // struct node *head=(struct node*)malloc(sizeof(struct node));
        // printf("Enter data:");
        // scanf("%d",&valuedata);
        // head->data=valuedata;
        // head->next=NULL;
        //point=head;
    }else{
        while(node->next!=NULL){
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        node->next=newnode;
        printf("Enter data:");
        scanf("%d",&valuedata);
        newnode->data=valuedata;
        newnode->next=NULL;
        top++;
        }
    }
}












/*

// Given a reference (pointer to pointer) to 
// the head of a list and an int,  inserts a 
// new node on the front of the list. 
void push(struct Node** head_ref, 
          int new_data)
{
    // 1. Allocate node 
    struct Node* new_node = 
           (struct Node*) malloc(sizeof(struct Node));
  
    // 2. put in the data  
    new_node->data  = new_data;
  
    // 3. Make next of new node as head 
    new_node->next = (*head_ref);
  
    // 4. move the head to point to
    // the new node 
    (*head_ref)    = new_node;
}

// */
// void push(){
//     int i=0;
//     int value;
//     if(top==size-1){
//         printf("Overflow.\n");
//     }else{
//        struct node *node[i]=(struct node*)malloc(sizeof(struct node));
//        printf("insert data:");
//        scanf("%d",&value);
//        node[i]->data=value;
//        node[i]->next=node[i++];
//        i++;
//     }

// }

void pop(){

}

void print(struct node *node){
    if(top==-1){
        printf("underflow\n");
    }else{
        while(node->next!=NULL){
            printf("%d\n",node->data);
            node=node->next;
        }
    }
}

void tops(){

}

void isempty(){

}

void isfull(){

}


// #include <stdio.h>
// #include <stdlib.h>
  
// struct node {
//     int data;
//     struct node *next;
// }*top;
 
// /*
// Initialize an empty stack
// */
// void initialize() {
//     top = NULL;
// } 
 
// /*
// Checks if Stack is empty or not
// */
// int isEmpty() {
//     if (top == NULL) 
//         return 1;
//     else
//         return 0;
// }
 
// /*
// Returns the top element of Stack
// */
// int peek() {
//     return top->data;
// }
 
// /* Count stack elements */
// int getStackSize(struct node *head){
//     /* Input Validation */
//     if (head == NULL) { 
//        printf("Error : Invalid stack pointer !!!\n");       
//        return;  
//     }
      
//     int length = 0;
//     while(head != NULL){
//         head = head->next;
//         length++;
//     }
//     return length;
// }
 
// /* 
// Push an Element in Stack 
// */
// void push(int num) {
//     struct node *temp;
//     temp =(struct node *)malloc(1*sizeof(struct node));
//     temp->data = num;
     
//     if (top == NULL) {
//         top = temp;
//         top->next = NULL;
//     } else {
//         temp->next = top;
//         top = temp;
//     }
// }
 
// /*
// Pop Operation: Removes Top Element of the Stack
// */
// void pop() {
//     struct node *temp;
//     if (isEmpty(top)) {
//         printf("\nStack is Empty\n");
//         return;
//     } else {
//         temp = top;
//         top = top->next;
//         printf("Removed  Element : %d\n", temp->data);   
//         free(temp); 
//     }
// }
 
// /*
//  Prints the linked list representation of a stack  
// */
// void printStack(struct node *nodePtr) {
//   while (nodePtr != NULL) {
//      printf("%d", nodePtr->data);
//      nodePtr = nodePtr->next;
//      if(nodePtr != NULL)
//          printf("-->");
//   }
//   printf("\n");
// }
 
// void main() {
//    /* Initialize Stack */
//    initialize();
//    /* Push Elements in stack */
//    push(1);
//    push(2);
//    push(3);
//    push(4);
//    /* Prints Size of Stack */
//    printf("Stack Size : %d\n", getStackSize(top));
//    /* Printing top element of Stack */
//    printf("\nTop Element : %d\n", peek());
//    /* Printing Stack */
//    printf("Stack as linked List\n");
//    printStack(top);
//    /* Removing elements from stack */
//    pop();
//    pop();
//    pop();
//    pop();
//    pop();
//    printStack(top);
    
//    return;
// }
// 