#include<stdio.h>

int mul(int a,int n);
int main(){
    int a;
    printf("Enter the value of table: ");
    scanf("%d",&a);
    int n;
   /* for(n=1;n<11;n++){
        n++;
    }*/
    int multiply;
    printf("Table of %d \n",a);
    for(n=1;n<11;n++){
        multiply=mul(a,n);
        printf("%d * %d = %d \n",a,n,multiply);
        }
    return 0;
}
int mul(int a,int n ){
    int mul;
    mul=a*n;
    return mul;
}