//write a program to add, subtract,multiply and divide two integers using user defined type funtion

#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    printf("Addition %d\n",add(num1,num2));
    printf("substraction %d\n",sub(num1,num2));
    printf("multiflication %d\n",mul(num1,num2));
    printf("division %d\n",div(num1,num2));

    return 0;
}

int add(int a,int b){
    return a + b;
}

int sub(int a,int b){
    return a - b;
}

int mul(int a,int b){
    return a * b;
}

int div(int a,int b){
    return a / b;
}