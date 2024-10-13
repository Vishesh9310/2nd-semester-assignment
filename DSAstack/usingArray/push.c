#include<stdio.h>
#include<stdlib.h>

int size=5;
int arr[5];
int top=-1;

void push();
void pop();
void print();
void isempty();
void isfull();
void tops();

int main(){
    int choice;
    while(1){
        printf("Enter choice:\n1: for push\n2: for pop\n3: for print\n4: for exit\n5: for isempty\n6: for isfull\n7: for top\n\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
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

void push(){
    int data;
    if(top==size-1){
        printf("Overflow");
    }else{
        printf("Enter data:");
        scanf("%d",&data);
        top++;
        arr[top]=data;
    }
}

void pop(){
    if(top==-1){
        printf("underflow");
    }else{
        printf("\nelement is popped: %d\n",arr[top]);
        top--;
    }
}

void print(){
    if(top==-1){
        printf("underflow\n");
    }else{
        printf("Elements presend in the stack: \n");
        for(int i=top;i>=0;--i){
            printf("%d\n",arr[i]);
        }
    }
}

void isempty(){
    if(top==-1){
        printf("stack is empty.\n");
    }else if(top==size-1){
        printf("stack is full.\n");
    }else{
        printf("stack has space.\n");
    }
}

void isfull(){
    if(top==size-1){
        printf("stack is full.\n");
    }else{
        printf("stack has space.\n");
    }
}

void tops(){
    printf("%d\n",arr[top]);
}

