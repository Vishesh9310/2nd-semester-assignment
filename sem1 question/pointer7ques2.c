//write a program to find the sum of all the elements of an array using pointers

#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,9};
    int *p,i;

    p=arr;
    int sum=0;
    for(i=0;i<10;i++){
        sum=sum+*p;
        p++;
    }
    printf("sum of all elements of an array = %d",sum);

    return 0;
}