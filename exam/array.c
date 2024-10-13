#include <stdio.h>
int main(){
    //pre-defined
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    //userdefined
    int arr[10]; 
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
    }


    //print array
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}