//write a C program to find the minimum element in a stack.

#include<stdio.h>
#include<stdlib.h>

#define max 100

int stack[max];
int min;
int top=-1;

void push();
void minimum();
void print();

int main(){
    int choice;
    
    while(1){
        printf("Enter choice:\n1) for push\n2) for print\n3) for min\n\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                print();
                break;
            case 3:
                minimum();
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }

    return 0;
}

void push(){
    int x;
    if(top==max-1){
        printf("Overflow\n");
    }else{
        printf("Enter value:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void print(){
    if(top==-1){
        printf("Underflow");
    }else{
        for(int i=top;i>=0;--i){
        printf("%d\n",stack[i]);
        }
    }
}

void minimum(){
    min=stack[top];
    for(int i=top;i>=0;--i){
        if(stack[i]<min){
            min=stack[i];
        }
    }
    printf("minimum element in a stack: %d\n",min);
}