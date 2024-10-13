//write a program to check conditon when value is divisible by 5 or not and divisable by 7 but not by 11;

#include<stdio.h>
int main(){
    int num;
    int i,size;

    printf("Enter the size, how many time use this :");
    scanf("%d",&size);

    printf("Enter a number:");
    scanf("%d",&num);
    
    // while(scanf("%d",&num))
    if ((num % 5 == 0 || num % 7 == 0)&&(num % 11 != 0)){
         printf("number is passed test.\n");
    }else{
        printf("number is not passed this test.\n");
    }

    return 0;
}