//write a program to copy one string to another string with and without using string handling function.

#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    int i;
    printf("Enter the first string:\n");
    scanf("%s",&str1);
    char *p1,*p2;
    p1=str1;
    p2=str2;

    printf("Second string is:");
    for(i=0;i<strlen(str1);i++){
        str2[i]=*p1;
        printf("%c",str2[i]);
        p1++;
    }

    return 0;
}