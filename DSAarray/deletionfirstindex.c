#include<stdio.h>
int main(){
    int arr[10]={1,2,3,6,43,1,73,23,23,54};
    for(int i=0;i<=10;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<9;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}