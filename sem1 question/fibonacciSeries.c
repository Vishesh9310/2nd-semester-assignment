#include<stdio.h>

int fibo(int num1, int num2);

int main(){
    // 0 1 1 2 3 5

   int i,n;
    int fN=0,sN=1;
    int nextterm = fN + sN;
    printf("Enter the size of fibonacci series:");
    scanf("%d",&n);

    printf("fibonacci series is %d, %d, ",fN,sN);

    for(i=3;i<=n;i++){
        printf("%d, ",nextterm);
        fN=sN;
        sN=nextterm;
        nextterm=fN+sN;
    }
  
    
    return 0;
}