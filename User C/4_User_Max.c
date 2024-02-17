#include <stdio.h>

// Function prototype
int findMax(int num1, int num2);

int main() {
    int a, b;
    
    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Call the function to find the maximum
    int max = findMax(a, b);
    
    // Display the maximum number
    printf("Maximum of %d and %d is: %d\n", a, b, max);
    
    return 0;
}

// Function definition to find the maximum of two numbers
int findMax(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}
