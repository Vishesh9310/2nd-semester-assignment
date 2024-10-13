#include<stdio.h>
int main(){

    //using conditional operator

    int number;
    printf("Enter number:");
    scanf("%d",&number);

    number%2?printf("odd"):printf("even");

    //without using bitwise and modulas operator find even or odd
    int num,var;
    printf("Enter any number");
    scanf("%d",&num);
    
    var = num/2;
    if(num==var*2){
        printf(" \nThe given number is even");
    }else{
        printf("\nThe given number is odd");
    }

return 0;
}