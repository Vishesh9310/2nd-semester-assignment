//error




//write a C program that checks whether a string of parentheses is balanced or not using stack
/*
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

char str[10];
char input;
int top=-1;
int size=10;


void push();
int checking();
void print();

int main(){
    printf("Enter string into stack");
    for(int i=top;)
    


    return 0;
}
*/


/*
int main(){
    int choice;
    while(true){
        printf("\nEnter choice:\n1) for Enter data: \n2) for check parentheses is balanced or not\n\n");
        scanf("%d",&choice);
    
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                checking()?printf("Balanced"): printf("Not Balanced"); 
                break;
            case 3:
                print();
                break;
            default:
                printf("Enter valid option");
                break;
        }

    }

    return 0; 
}

void push(){
    if(top==size-1){
        printf("Overflow");
    }else{
        printf("Enter string:");
        scanf("%c",&input);
        top++;
        str[top]=input;
    }
}

int checking(){
    if(0==0){
        return 1;
    }else{
        return 0;
    }
}

void print(){
    if(top==-1){
        printf("underflow\n");
    }
    for(int i=top;i>=0;--i){
        printf("%c\n",str[i]);
    }
}

*/

/*
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
*/


#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAX 100

struct stack {
  char stck[MAX];
  int top;
}s;

void push(char item) {
  if (s.top == (MAX - 1))
    printf("Stack is Full\n");

  else {
    s.top = s.top + 1;
    s.stck[s.top] = item;
  }
}

void pop() {
  if (s.top == -1)
    printf("Stack is Empty\n");

  else
    s.top = s.top - 1;
}

int checkPair(char val1,char val2){
    return (( val1=='(' && val2==')' )||( val1=='[' && val2==']' )||( val1=='{' && val2=='}' ));
}

int checkBalanced(char expr[], int len){
      
    for (int i = 0; i < len; i++)  
    { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')  
        {  
          push(expr[i]); 
        } 
        else
        {
            // exp = {{}}}
            // if you look closely above {{}} will be matched with pair, Thus, stack "Empty"
            //but an extra closing parenthesis like '}' will never be matched
            //so there is no point looking forward
        if (s.top == -1) 
            return 0;
        else if(checkPair(s.stck[s.top],expr[i]))
        {
            pop();
            continue;
        }
        // will only come here if stack is not empty
        // pair wasn't found and it's some closing parenthesis
        //Example : {{}}(]
        return 0;
        }
    }    
    return 1; 
}
int main() {
  char exp[MAX] = "({})[";
  int i = 0;
  s.top = -1;

  int len = strlen(exp);
  checkBalanced(exp, len)?printf("Balanced"): printf("Not Balanced"); 

  return 0;
}



