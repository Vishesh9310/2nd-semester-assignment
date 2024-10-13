//error code is not run now
#include <stdio.h>

// // Recursive function to generate the nth Fibonacci number
// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// // Function to print the Fibonacci series up to n terms
// void printFibonacciSeries(int n) {
//     printf("Fibonacci Series up to %d terms: ", n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");
// }

// int main() {
//     int n;

//     printf("Enter the number of terms for the Fibonacci series: ");
//     scanf("%d", &n);

//     if (n <= 0) {
//         printf("Please enter a positive integer for the number of terms.\n");
//         return 1; // Exit with an error code
//     }

//     printFibonacciSeries(n);

//     return 0;
// }

#include<stdio.h>
int fibonacci(int i);
int main(){
    int n,i;

    printf("Enter the size of the series: ");
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        printf("%d \n",fibonacci(i));
    }
    return 0;
}
int fibonacci(int i){
    if(i==0){
        return 0;
    }
    if (i==1){
        return 1;
    }
   // return n + sum_of_natural_numbers(n - 1);
   if(i>1){

   
    return fibonacci(i-1)+fibonacci(i-2);
   }
}