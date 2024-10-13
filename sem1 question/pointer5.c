// code for addition of two array with indivisual units

#include<stdio.h>
int main(){
    int arr1[9]={11,23,56,34,67,23,67,34,56};
    int arr2[9]={9,8,7,6,5,4,3,2,1};
    int i;
    int *p1;
    int *p2;
    
    p1=arr1;
    p2=arr2;

    for(i=0;i<9;i++){
        int valueA=*p1;
        int valueB=*p2;
        int plus = valueA + valueB;
        printf("\n%d",plus);
        p1++;
        p2++;
    }

    return 0;

}