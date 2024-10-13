//write a program to compare two strings.

#include<stdio.h>
int compare(char str1[], char str2[]);

int main(){
    char str1[100];
    char str2[100];

    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    // comparing both the strings using strcmp() function  
    //value=strcmp(str1,str2);
    int value=compare(str1,str2);

    if(value==0){
        printf("strings are same");
    }else{
        printf("strings are not same");
    }

    return 0;
}
int compare(char str1[], char str2[]){
    int len1=0,len2=0;
    int output;

    while(str1[len1] !='\0' || str2[len2] != '\0'){

        if(str1[len1] == str2[len2]){
            output=0;
        }else{
            output=1;
        }
        len1++;
        len2++;
    }
    
    return output;
}