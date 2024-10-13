#include<stdio.h>
#define size 7

int arr[size];

void init(){
    int i;
    for(i=0;i<size;i++)
    arr[i]=-1;
}

void insert(int value){
    int key=value%size;
    if(arr[key]==-1){
        arr[key]=value;
        printf("%d inserted at arr[%d]\n",value,key);
    }else{
        printf
    }
}