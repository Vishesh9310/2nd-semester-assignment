// write a C program to implement a stack and accept some numeric values. Find the top and kth element of the stack.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5];
    int value;
    int top=-1;
    int size=5;
    int kth;

    for(int i=0;i<=5;i++){

    if(top==size-1){
        printf("Overflow\n");
    }else{
        printf("Enter data:");
        scanf("%d",&value);
        top++;
        arr[top]=value;
    }

    }
    //print

    printf("\nstack data:\n");
    if(top==-1){
        printf("Underflow\n");
    }else{
        for(int i=top;i>=0;--i){
        printf("%d\n",arr[i]);
        kth=arr[i];
        }
    }

    printf("Top element of stack is: %d\n",arr[top]);
    printf("kth element of stack is: %d\n",kth);
    return 0;
}