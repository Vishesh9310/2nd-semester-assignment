//write a C program to count the number of elements in a queue

#include<stdio.h>
#include<stdlib.h>

#define max 100
int front=-1,rear=-1;
int queue[max];
int count=0;

void enqueue();
void counting();

int main(){
    int choice;
    while(1){
        printf("\nEnter choice:\n1) for enqueue.\n2) for count.\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                counting();
                break;
            default:
                printf("invalid number\n");
                break;
        }
    }
    return 0;
}

void enqueue(){
    int value;
    if(rear==max-1){
        printf("Overflow");
    }else{
        printf("Enter data:");
        scanf("%d",&value);
        rear++;
        queue[rear]=value;
        count++;
    }
}

void counting(){
    if(rear==-1){
        printf("Count is: 0");
    }else{
        for(int i=rear;i>front;i--){
            printf("%d ",queue[i]);
        }
        printf("Count is: %d",count);
    }

}