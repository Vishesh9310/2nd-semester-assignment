//write a C program to implement a queue using a linked list.
// Programs should contain functions for inserting elements into the queue,
// displaying queue elements, and checking whether the queue is empty or not.


//Error in dequeue function

#include<stdio.h>
#include<stdlib.h>

#define max 10
int count=0;

struct node{
    int data;
    struct node *next;
}*front,*temp,*rear;

void enqueue();
void dequeue();
void print();


int main(){
    int choice;
    int value;
    while(1){
        printf("\nEnter choice:\n1) for enqueue.\n2) for dequeue.\n3) for print\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                print();
                break;
            default:
                printf("invalid number\n");
                break;
        }
    }
    return 0;
}

void enqueue(){
    int element;
    if(count==max){
        printf("overflow\n");
    }else{
        printf("Enter data:");
        scanf("%d",&element);
        if(rear == NULL){
            rear=(struct node*)malloc(1*sizeof(struct node));
            rear->data=element;
            rear->next=NULL;
            front=rear;
        }else{
            temp=(struct node*)malloc(1*sizeof(struct node));
            temp->next=rear;
            temp->data=element;
            rear=temp;
        }
        count++;
        printf("node is inserted.\n");
    }
}

void dequeue(){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    if(count==0){
        printf("Underflow");
    }else{
        while(rear!=NULL){
        front = rear;
        rear = rear -> next;
        free(front);
        count--;
        }
        printf("node is removed.\n");
    }
}

void print(){
    if(rear->next==NULL){
        printf("Underflow");
    }else{
        while(rear!=NULL){
            printf("%d ",rear->data);
            rear=rear->next;
        }
    }
}

/*
include <stdio.h> 
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * front;
struct node * rear;

void insert(struct node * ptr, int item) {

    ptr = (struct node * ) malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW\n");
        return;
    } else {
        ptr -> data = item;
        if (front == NULL) {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        } else {
            rear -> next = ptr;
            rear = ptr;
            rear -> next = NULL;
        }
    }
}

void deleteNode(struct node * ptr) {
    if (front == NULL) {
        printf("Underflow");
        return;
    } else {
        ptr = front;
        front = front -> next;
        free(ptr);
    }
}

int main() {
    struct node * head = NULL;
    insert(head, 10);
    insert(head, 20);

    printf("front element: %d\n", front -> data);
    deleteNode(head);
    printf("front element: %d", front -> data);
    return 0;
}
*/