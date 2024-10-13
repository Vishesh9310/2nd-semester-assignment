//write a program to display a largest and smallest element of an array defied in question 1;

#include<stdio.h>
int main(){
    float largest,smallest,positionlarge,positionsmall;

    float arr[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%f",&arr[i]);
    }

    largest=arr[0];
    smallest=arr[0];
    for(i=0;i<10;i++){
        if(largest<arr[i]){
            largest = arr[i];
            positionlarge = i+1;
        }
        if(smallest>arr[i]){
            smallest=arr[i];
            positionsmall=i;
        }
    }
    printf("largest value of in this array is:%0.2f \n",largest);
    printf("smallest value of in this array is: %0.2f \n",smallest);
    printf("position of largest value in this array is:%0.2f \n",positionlarge);
    printf("position of smallest value of in this array is: %0.2f \n",positionsmall);

    return 0;
}