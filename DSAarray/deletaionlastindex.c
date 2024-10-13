#include<stdio.h>
int main(){
    int arr[10]={1,2,4,3,6,32,76,12,75,23};
    int size=sizeof(arr)/sizeof(arr[0]);
    int num=size;
    num--;

    arr[num]='\0';
    

    for(int i=0;i<num;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    return 0;
}