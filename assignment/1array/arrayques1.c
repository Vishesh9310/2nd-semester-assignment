//how do you find the duplicate number on a given integer array?
#include<stdio.h>
int main(){
    int arr[10]={14,20,23,12,45,23,45,12,14,20};

   for(int i = 0; i < 10; i++) {    
        for(int j = i+ 1; j < 110; j++) {    
            if(arr[i] == arr[j]){
                printf("arr[%d]=%d is duplicate in array.\n",i,arr[i]);
            }
        }    
    }   

    return 0;
}