//write a C program to reverse the elements of a queue.
#include<stdio.h>
#include<stdlib.h>

#define max 100
int front=-1,rear=-1;
int queue[max];

void enqueue();
void reverse();

int main(){
    int choice;
    while(1){
        printf("\nEnter choice:\n1) for enqueue.\n2) for reverse.\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                reverse();
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

/*
void reverse(){
    int size=sizeof(queue)/sizeof(queue[0]);
    int rev[size];
    int j;
    if(rear==-1){
        printf("Underflow");
    }else{
        for(int i=0;i<=rear;i++){
            rev[j]=queue[i];
            j--;
        }
        
        for(int i=0;i<=rear;i++){
            printf("%d ",rev[i]);
        }
    }
}
*/

void reverse(){
    if(rear==-1){
        printf("Underflow");
    }else{
        
        for(int i=0;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}