//write a program to sort 5 string words stored in an array of pointers.

#include<stdio.h>
int main(){
    int arr[10]={1,2,5,3,6,4,2,4,7,3};
    int i;
    int *p;
    p=arr;

    printf("before array:");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\nafter array:");
    int temp;
    for (i=0;i<10;++i) {
            for (int j=i+1;j<10;++j){
               if (*(p + j) < *(p + i)) {  
                temp = *(p + i);  
                *(p + i) = *(p + j);  
                *(p + j) = temp;  
               
              }
            }
       }
    // for (i=0;i<10;++i) {
    //         for (int j=i+1;j<10;++j){
    //             if (arr[i]>arr[j]) {
    //                 temp =  arr[i];
    //                 arr[i] = arr[j];
    //                 arr[j] = temp;
    //           }
    //         }
    //    }

    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}