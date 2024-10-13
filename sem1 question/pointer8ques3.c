//write a program to swap value of two variable using pointer
#include<stdio.h>
int main(){
int a=10,b=20;
int *p1,*p2;

p1=&a;
p2=&b;

int temp;
temp=*p1;
*p1=*p2;
*p2=temp;

printf("a= %d and b= %u",*p1,*p2);


    return 0;
}