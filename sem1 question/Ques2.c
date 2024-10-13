//write a program to check input value is vowel or not

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Alphabate:");
    scanf("%s",&ch);

    switch(ch){
        case ( 'a'):
        printf("Enterd value is vowel.");
        break;
        case 'A':
        printf("Entered value is vowel.");
        break;
         case 'e':
        printf("Enterd value is vowel.");
        break;
        case 'E':
        printf("Entered value is vowel.");
        break;
         case 'i':
        printf("Enterd value is vowel.");
        break;
        case 'I':
        printf("Entered value is vowel.");
        break;
         case 'o':
        printf("Enterd value is vowel.");
        break;
        case 'O':
        printf("Entered value is vowel.");
        break;
         case 'u':
        printf("Enterd value is vowel.");
        break;
        case 'U':
        printf("Entered value is vowel.");
        break;

        default:
        printf("Entered value is consonant.");
        break;
    }
    
    
    
   /* if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
         printf("Entered Alphabate is vowel.");
    }else{
        printf("Entered Alphabate is consonent.");
    }*/

    return 0;
} 
