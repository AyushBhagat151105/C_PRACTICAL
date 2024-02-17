#include <stdio.h>

// Function to calculate Fibonacci series recursively
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series up to a given limit
void printFibonacci(int limit) {
    int i;
    printf("Fibonacci Series up to %d terms:\n", limit);
    for (i = 0; i < limit; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

// Main function
int main() {
    int n;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    
    // Call function to print Fibonacci series
    printFibonacci(n);

    return 0;
}
