//error


//write a C program to convert a decimal number to its binary equivalent using stack
/*
BINARY TO DECIMALS

binarry number   ===       decimal number
101001           ===       1*2power0 + 0*2power1 + 0*2power2 + 1*2power3 + 0*2power4 + 1*2power5
101001           ===       1+0+0+8+32
101001           ===       41

*/
/*
DECIMALS TO BINARY

decimal number   ===       binary number
41               ===       2 | 41 |
                           2 | 20 | 1
                           2 | 10 | 0
                           2 | 5  | 0
                           2 | 2  | 1
                           2 | 1  | 0
41               ===       101001
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int value;
    int top=-1;
    int data;
    ///int arr[110];
    int num;

    printf("Enter Decimal Number:");
    scanf("%d",&num);
    value=num;

    int arr[32]; //assumming 32 bit integer.

    if(num==0){
        printf("0");
    }

    int i=0;
    for(i=0;i>0;){
        arr[i++]=num%2;
        num=num/2;
    }

     for (int j = i-1; j >= 0; j--)
      printf("%d", arr[j]);
    
    

    /*
    while(value!=0){
        data=value%2;
        top++;
        arr[top]=data;
        value=value/2-data;
    }*/
    printf("\n");
/*
int value;
    int count=0;
    int top=-1;
    int data;
    int size=5;
    int arr[10];

    while(value!=0){
        value=value/10;
        count++;
    }

    printf("%d\n",count);

    int arr[5];
    for(int i=0;i<count;i++){

    
        printf("Enter data:");
        scanf("%d",&data);
        top++;
        arr[top]=data;
    

    }


    // for(int i=0;i<=5;i++){

    // if(top==size-1){
    //     printf("Overflow\n");
    // }else{
    //     printf("Enter data:");
    //     scanf("%d",&value);
    //     top++;
    //     arr[top]=value;
    // }

    // }
*/
    // for(int i=top;i>=0;--i){
    //     printf("%d",arr[i]);
    // }
    
    return 0;
}

/*

#include <stdio.h>

void decimalToBinary(int num) {   
    if (num == 0) {
        printf("0");
        return;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);
}

int main() {
   int num = 9;
   decimalToBinary(num);
   return 0;
}

*/