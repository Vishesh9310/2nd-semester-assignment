#include<stdio.h>

int main(){
    int num1=10;
    int num2=40;
    int num3=30;

    if(num1>num2&&num1>num3){   
        printf("higest number is num1=%d",num1);
    }else if(num2>num3&&num2>num3){
        printf("higest number is num2=%d",num2);
    }else if(num3>num1&&num3>num2){
        printf("higest number is num3=%d",num3);
    }else{
        printf("Invalid Number");
    }
    

    if(num1<num2&&num1<num3){
        printf("lowest number is num1=%d",num1);
    }else if(num2<num3&&num2<num3){
        printf("lowest number is num1=%d",num1);
    }else if(num3<num1&&num3<num2){
        printf("lowest number is num1=%d",num1);
    }else{
        printf("Invalid Number");
    }
    


    return 0;
}
