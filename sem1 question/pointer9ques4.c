//write a program to read a sentence and count the number of characters & words in that sentence.
// i am facing erroe in this code when i click on the space button so i cant count the size of the word and charactes

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter your sentences:");
    scanf("%s",&str);

    //charcount
    int charcount=strlen(str);
    // int charcount=strlen(str)-1;
    printf("count of characters is %d\n",charcount);

    //word count
    int wordcount=0;
    int i;
    for(i=0;i<strlen(str);i++){
        if(str[i]==' '||str[i]=='\n'){
            wordcount++;
        }
        if(charcount>0 &&str[charcount-1]!=' '&&str[charcount-1]!='\n'){
            wordcount++;
        }
    }
    printf("count of words is %d\n",wordcount);
      
    return 0;
}