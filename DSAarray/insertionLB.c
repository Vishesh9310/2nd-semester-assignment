//Insert element on index 0 in an array

#include<stdio.h>
int main(){
    int i,sizearr,size,value;
    printf("Enter value of which you want to insert in this array:");
    scanf("%d",&value);
    int arr[5]={1,2,4,5};

    sizearr=sizeof(arr)/sizeof(arr[0]);
    size=sizearr-1;

    for(i=size;i>=0;i--){
        arr[i]=arr[i-1];
    }

    arr[0]=value;

    for(i=0;i<=size;i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }

    return 0;
}