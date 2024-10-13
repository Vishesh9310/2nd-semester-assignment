#include<stdio.h>
int main(){

    int n,i,fact=1;

    printf("Enter the number:");
    scanf("%d",&n);

    if(n<0){
        printf("Enter number is invalid.");
    }else{
        for(i=1;i<=n;++i){

           // fact *= i;
           fact=fact*i;
        }

        printf("factorial of %d =%d",n,fact);
    }


    return 0;
}