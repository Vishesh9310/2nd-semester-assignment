//how do you find the largest and smallest number in an unsorted integer array?
#include<stdio.h>
int main(){
    int arr[10]={3,20,54,84,54,32,65,5,65,23};
    int max=0,min=arr[0];
    int maxindex=0,minindex=0;

    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(arr[i]>max){
                max=arr[i];
                maxindex=i;
            }
        }
    }
    printf("arr[%d]=%d is greatest.\n",maxindex+1,max);
   // printf("%d is greatest",max);

    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(arr[i]<min) {
                min=arr[i];
                minindex=i;
            }
        }
    }
    printf("arr[%d]=%d is lowest.\n",minindex+1,min);

    return 0;
}