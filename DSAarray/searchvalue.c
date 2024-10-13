#include<stdio.h>
int main(){
    int search,i;
    int arr[10]={1,2,4,2,5,3,65,3,12,65};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter index which value you want to find:");
    scanf("%d",&search);
    for(i=0;i<size;i++){
        if(i==search){
            printf("value of index %d=%d",i,arr[i]);
        }
    }
    return 0;
}