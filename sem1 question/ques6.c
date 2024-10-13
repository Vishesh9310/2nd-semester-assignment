//program for input floating values in an array;

#include<stdio.h>
int main(){
    float arr[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%f",&arr[i]);
    }

    for(i=0;i<10;i++){
        printf("%0.2f\n",arr[i]);
    }

    return 0;
}