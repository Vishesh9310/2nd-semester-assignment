//write a C program that accepts a string and reverse it using a stack.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 100
int top=-1;
int stack[max];

void push(char x);
void reverse();

int main(){
    int top=-1;
    char str[]="hello";
    int len=strlen(str);
    int i;  
  
    for(i=0;i<len;i++)  
        push(str[i]);  
  
    for(i=0;i<len;i++)  
      reverse();

    return 0;
}
void push(char x){
      // Push(Inserting Element in stack) operation  
        if(top==max-1){
            printf("Overflow\n");
        }else{
            stack[++top]=x;
        }
}
void reverse(){  
    // Pop (Removing element from stack)  
      printf("%c",stack[top--]);  
}  