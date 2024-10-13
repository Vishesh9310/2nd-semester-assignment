//write a program to concatenate two strings.
#include<stdio.h>
void strcat01(char str1[], char str2[]);
int main(){
    char str1[100];
    char str2[100];

    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);

    strcat01(str1,str2);
   // printf("string 3 : %s",str1);

    return 0;
}

void strcat01(char str1[], char str2[]){
    int i=0,j=0;
    char str3[200];
    while(str1[i] != '\0'){
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i] != '\0'){
        str3[j]=str2[i];
        i++;
        j++;
    }
    str3[j]='\0';
    printf("string 3 = %s",str3);
}
// include<stdio.h>

// int main(){
//     char str1[100];
//     char str2[100];
//     char str3[200];

//     printf("Enter the first string:");
//     gets(str1);
//     printf("Enter the second string:");
//     gets(str2);

//     //find length of string 1
//     int len1=0;
//     while(str1[len1] != '\0'){
//         len1++;
//     }
//      //find length of string 2
//     int len2=0;
//     while(str1[len2] != '\0'){
//         len2++;
//     }

//     for(int j=0;j<len2;j++){
//         str1[len1+j]=str2[j];
//     }

//     printf("string 3 : %s",str1);

//     return 0;
// }