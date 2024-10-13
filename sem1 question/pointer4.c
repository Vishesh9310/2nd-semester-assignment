//write a program to calculate sum of first 50 natural numbers using recusive function
#include <stdio.h>

// Function to calculate the sum of first n natural numbers recursively
int sum_of_natural_numbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum_of_natural_numbers(n - 1);
    }
}

int main() {
    // Calculate the sum of the first 50 natural numbers
    int result = sum_of_natural_numbers(50);

    printf("Sum of the first 50 natural numbers: %d\n", result);

    return 0;
}