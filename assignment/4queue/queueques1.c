/*
write a C program to implement a queue using an Array.
Programs should contain functions for inserting elements into the queue,
displaying queue elements, and checking whether the queue is empty or not.
*/

#include<stdio.h>
#include<stdlib.h>

#define max 10
int queue[max];
int rear=-1,front=-1;

void enqueue();
void dequeue();
void print();
void isempty();

int main(){
    int choice;
    while(1){
        printf("\nEnter choice:\n1) for enqueue.\n2) for dequeue.\n3)for print.\n4) for is empty\n\n");
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
            case 4:
                isempty();
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
    if(rear==max-1){
        printf("overflow\n");
    }
    if(front == -1){
        front=0;
    }
    printf("Enter data:");
    scanf("%d",&element);
    rear++;
    queue[rear]=element;

}

void dequeue(){
    if (front == - 1 || front > rear){
        printf("Underflow \n");
        return ;
    }else{
        printf("Element deleted from the Queue: %d\n", queue[front]);
        front = front + 1;
    }
}

void print(){
    if(front==-1){
        printf("Underflow");
    }
    
    for(int i=rear;i>=front;--i){
    printf("%d ",queue[i]);
    }
}

void isempty(){
    if(front==-1||front>rear){
        printf("is empty\n");
    }else{
        printf("is no empty\n");
    }
}