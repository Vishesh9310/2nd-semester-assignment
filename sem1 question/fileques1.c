/* Ques 1:write characters into a file "filec.txt".the set of characters are read form 
the keyboard until an enterkey is pressed(use putc() and getc() function).*/
// #include<stdio.h>
// int main(){
//     FILE *fileptr;
//     fileptr=fopen("files.txt","w");
//     char c[100];
//     printf("Enter strings in the range of 100 characters:\n");
//     gets(c);
//     fputs(c,fileptr);
//     fclose(fileptr);
//     return 0;
// }

//Ques 2:Read characters form file"filec.txt" created in question 1.
//also count the number of characters in the file (use fputs() and fgets()function).

// #include<stdio.h>
// #include<string.h>
// int main(){
//     FILE *fileptr;
//     fileptr=fopen("files.txt","w");
//     char c[100];
//     printf("Enter strings in the range of 100 characters:\n");
//     gets(c);
//     fputs(c,fileptr);
//     printf("count of the characters:%d",strlen(c));
//     fclose(fileptr);
//     return 0;
// }


//Ques 3.Write set of strings each of length 40 into a file "stringc.txt"and display it (use fputs() and fgets() function).

// #include<stdio.h>
// #include<string.h>
// int main(){
//     FILE *fileptr;
//     fileptr=fopen("stringc.txt","w");
    
//     char str1[40];
//     char str2[40];
//     printf("Enter strings 1 in the range of 40 characters:\n");
//     gets(str1);
//     fputs(str1,fileptr);
//     printf("Enter strings 2 in the range of 40 characters:\n");
//     gets(str2);
//     fputs(str2,fileptr);
//     fclose(fileptr);

//     fileptr = fopen("stringc.txt","r");
//     while(fgets(str1,100,fileptr)!=NULL){
//         printf("%s",str1);
//     }
//     while(fgets(str2,100,fileptr)!=NULL){
//         printf("%s",str2);
//     }
//    // printf("count of the characters:%d",strlen(c));
//    // fclose(fileptr);
//     return 0;
// }

//ques 4.write name,age and height of a person into a data file "person.txt"and read it (use fprintf() and fscanf() function).
#include<stdio.h>
int main(){
    FILE *fileptr;
    char name[20];
    int age;
    int height;
    fileptr=fopen("emp.txt","w+");

    printf("Enter Name:\n");
    gets(name);
    printf("Enter Age:\n");
    scanf("%d",&age);
    printf("Enter height:\n");
    scanf("%d",&height);
    fprintf(fileptr,"Name = %s\n",name);
    fprintf(fileptr,"Age = %d\n",age);
    fprintf(fileptr,"Height = %d\n",height);
    fclose(fileptr);

    //using fgets function

    // fileptr=fopen("emp.txt","r");
    // while(fgets(name,20,fileptr)!=NULL){
    //     printf("%s",name);
    // }

    //using fscanf function

    // fileptr = fopen("emp.txt","r");
    // while(fscanf(fileptr,"%s",name)!= EOF){
    //     printf("%s ",name);
    // }


    // Open the file for reading
    fileptr = fopen("emp.txt", "r");

    // Check if the file opened successfully
    if (fileptr == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        return 1; // Return with an error code
    }

    // Read and display person details from the file
    fscanf(fileptr, "Name: %s\nAge: %d\nHeight: %d meters", name, &age, &height);
    printf("\nPerson Details Read from File:\n");
    printf("Name: %s\nAge: %d\nHeight: %d meters\n", name, age, height);

    // Close the file
    fclose(fileptr);


    return 0;
}








// #include<stdio.h>
// #include<string.h>

// int main(){
//     FILE *fileptr;
//     char name[20];
//     int age;
//     int height;
//     fileptr=fopen("emp.txt","w+");

//     printf("Enter Name:\n");
//     scanf("%s",&name);
//     fprintf(fileptr,"Name = %s\n",name);
//     printf("Enter Age:\n");
//     scanf("%d",&age);
//     fprintf(fileptr,"Age = %d\n",age);
//     printf("Enter Height:\n");
//     scanf("%d",&height);
//     fprintf(fileptr,"Height = %d\n",height);
//     fclose(fileptr);

//     //printing data
//     while(fscanf(fileptr,"%s",name)==strlen(name)){
//         printf("%s",name);
//     }
//     fclose(fileptr);

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     FILE *fileptr;
//     fileptr=fopen("stringc.txt","w");
    
//     char str1[40];
//     char str2[40];
//     printf("Enter strings 1 in the range of 40 characters:\n");
//     gets(str1);
//     fputs(str1,fileptr);
//     //fclose(fileptr);
//     printf("Enter strings 2 in the range of 40 characters:\n");
//     gets(str2);
//     fputs(str2,fileptr);
//     fclose(fileptr);
//      fileptr = fopen("stringc.txt","r");
//     while(fgets(str1,100,fileptr)!=NULL){
//         printf("%s",str1);
//     }

//     while(fgets(str2,100,fileptr)!=NULL){
//         printf("%s",str2);
//     }
//    // printf("count of the characters:%d",strlen(c));
//    // fclose(fileptr);
//     return 0;
// }

//for fprintf

// #include <stdio.h>  
// main(){  
//    FILE *fp;  
//    fp = fopen("file.txt", "w");//opening file  
//    fprintf(fp, "Hello file by fprintf...\n");//writing data into file  
//    fclose(fp);//closing file  
// }  

// for fscanf

// #include <stdio.h>  
// main(){  
//    FILE *fp;  
//    char buff[255];//creating char array to store data of file  
//    fp = fopen("file.txt", "r");  
//    while(fscanf(fp, "%s", buff)!=EOF){  
//    printf("%s ", buff );  
//    }  
//    fclose(fp);  
// }  

// for data storing

// #include <stdio.h>  
// void main()  
// {  
//     FILE *fptr;  
//     int id;  
//     char name[30];  
//     float salary;  
//     fptr = fopen("emp.txt", "w+");/*  open for writing */  
//     if (fptr == NULL)  
//     {  
//         printf("File does not exists \n");  
//         return;  
//     }  
//     printf("Enter the id\n");  
//     scanf("%d", &id);  
//     fprintf(fptr, "Id= %d\n", id);  
//     printf("Enter the name \n");  
//     scanf("%s", name);  
//     fprintf(fptr, "Name= %s\n", name);  
//     printf("Enter the salary\n");  
//     scanf("%f", &salary);  
//     fprintf(fptr, "Salary= %.2f\n", salary);  
//     fclose(fptr);  
// }  


// #include<stdio.h>
// #include<string.h>

// int main(){
//     FILE *fileptr;
//     fileptr=fopen("files.txt","r");
//     char c[100];
    

//     while(fgets(c,100,fileptr)!=NULL){
//         //printf("%s\n",c);
//         puts(c);
        
//         printf("count of the characters in files.txt: %d",strlen(c));
//     }




//     // fputs(c,fileptr);
//     // fclose(fileptr);

// //     printf("Enter string:");
// //     gets(c);
// //    // puts(c);
// //     printf("output:\n%s",c);






   