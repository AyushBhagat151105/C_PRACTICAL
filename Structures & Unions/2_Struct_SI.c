#include <stdio.h>

// Define structure SimpleInterest
struct SimpleInterest {
    float amount;
    float rate;
    int years;
};

int main() {
    // Declare a variable of type SimpleInterest
    struct SimpleInterest si;

    // Read values for amount, rate, and years from user
    printf("Enter principal amount: ");
    scanf("%f", &si.amount);

    printf("Enter rate of interest: ");
    scanf("%f", &si.rate);

    printf("Enter number of years: ");
    scanf("%d", &si.years);

    // Calculate simple interest
    float simple_interest = (si.amount * si.rate * si.years) / 100.0;

    // Display the calculated simple interest
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
