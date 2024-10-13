#include<stdio.h>
int main(){
    int search,i;
    int arr[10]={1,2,4,2,5,3,65,3,12,65};
    printf("Enter number which index you want to find:");
    scanf("%d",&search);
    int size=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<size;i++){
        if(arr[i]==search){
            printf("index of value %d=%d",arr[i],i);
            break;
        }
    }
    return 0;
}