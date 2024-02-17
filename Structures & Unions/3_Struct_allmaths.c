#include <stdio.h>

// Define the structure
struct Calculate {
    float x;
    float y;
};

// Function to perform addition
float addition(struct Calculate calc) {
    return calc.x + calc.y;
}

// Function to perform subtraction
float subtraction(struct Calculate calc) {
    return calc.x - calc.y;
}

// Function to perform multiplication
float multiplication(struct Calculate calc) {
    return calc.x * calc.y;
}

// Function to perform division
float division(struct Calculate calc) {
    if (calc.y != 0)
        return calc.x / calc.y;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    // Declare and initialize structure variable
    struct Calculate calc = {10.5, 5.5};

    // Perform operations
    printf("Addition: %.2f\n", addition(calc));
    printf("Subtraction: %.2f\n", subtraction(calc));
    printf("Multiplication: %.2f\n", multiplication(calc));
    printf("Division: %.2f\n", division(calc));

    return 0;
}
