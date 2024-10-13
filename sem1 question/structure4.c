// write a program to read Roll no ,name , address, age and average marks
// of 12 students in the bce class and display the details from function

#include<stdio.h>

int n,i=1;

struct student{
    int roll;
    char name[20];
    char address[30];
    int age;
    float average;
};

void display(struct student s[i]);

int main(){
    
    printf("Enter the number of student:");
    scanf("%d",&n);
    struct student s[n];

    for(i=1;i<=n;i++){
        printf("Enter students details:roll number,name,address,age,average:\n");
        scanf("%d",&s[i].roll);
        scanf("%s",&s[i].name);
        scanf("%s",&s[i].address);
        scanf("%d",&s[i].age);
        scanf("%f",&s[i].average);
        printf("\n");
    }

    for(i=1;i<=n;i++){
        display(s);
    }

    return 0;
}
void display(struct student s[i]){
    printf("roll number of student: %d\n",s[i].roll);
    printf("name of student: %s\n",s[i].name);
    printf("address of student: %s\n",s[i].address);
    printf("age of student: %d\n",s[i].age);
    printf("average of student: %f\n",s[i].average);
    printf("\n\n");
}