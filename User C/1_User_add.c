#include <stdio.h>

// Function declaration
void addNumbers();

int main() {
    // Calling the function
    addNumbers();
    return 0;
}

// Function definition
void addNumbers() {
    int num1, num2, sum;

    // Input two numbers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Adding the numbers
    sum = num1 + num2;

    // Displaying the result
    printf("Sum: %d\n", sum);
}
