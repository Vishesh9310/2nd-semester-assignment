//find size of string without using strlen function.

#include<stdio.h>
int main(){
    char str1[100];
    printf("enter the string:\n");
    scanf("%s",&str1);
    int length=0;
    while(str1[length] != '\0'){
        length++;
    }
    printf("size of string = %d",length);

    return 0;
}