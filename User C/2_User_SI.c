#include <stdio.h>

void SI(float principal, float rate, int time) {
    float interest;

    // Calculate simple interest
    interest = (principal * rate * time) / 100.0;

    // Print the calculated interest
    printf("Simple Interest: %.2f\n", interest);
}

int main() {
    float principal, rate;
    int time;

    // Input principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%d", &time);

    // Call the function to calculate simple interest
    SI(principal, rate, time);

    return 0;
}
