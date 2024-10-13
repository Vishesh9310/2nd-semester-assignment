//write a C program to find the maximum element in a queue.

#include<stdio.h>
#include<stdlib.h>

#define max 100
int front=-1,rear=-1;
int queue[max];
int maxi=0;

void enqueue();
void maximum();

int main(){
    int choice;
    while(1){
        printf("\nEnter choice:\n1) for enqueue.\n2) for maximum.\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                for(int i=0;i<=rear;i++){
                    printf("%d ",queue[i]);
                }
                maximum();
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
    }
}

void maximum(){
    printf("\n");
    if(rear==-1){
        printf("Underflow");
    }else{
        for(int i=rear;i>front;--i){
            if(queue[i]>maxi){
                maxi=queue[i];
            }
        }
        printf("maximum number in queue is: %d",maxi);
    }
}