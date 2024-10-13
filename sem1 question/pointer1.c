//Define a function named fact() to calculate factorial of a number n and then
// write a program that uses this function fact() to calculate combination and permutation

#include<stdio.h>
int fact(int num);
int main(){
    int n,r,factorial;
    float combination,permutation;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);

    //for combination
    int sub=n-r;
    combination=fact(n)/(fact(sub)*fact(r));
    printf("combination is:%f\n",combination);

    //for permutation
    permutation=fact(n)/fact(sub);
    printf("permutation is:%f\n",permutation);
   
    //factorial=fact(n);
    //printf("factorial of %d numebr is:%d",n,factorial);

    return 0;
}

int fact(int num){
    int i,facto=1;
    if(num<0){
        printf("Enter number is invalid.");
    }else{
        for(i=1;i<=num;++i){

           // fact *= i;
           facto=facto*i;
        }
    }
    return facto;
}


