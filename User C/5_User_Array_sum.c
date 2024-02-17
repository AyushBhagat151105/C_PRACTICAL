#include <stdio.h>

// Function to calculate the sum of array elements
void calculateSum(int arr[], int n, int *sum) {
    *sum = 0; // Initialize sum to 0
    for (int i = 0; i < n; i++) {
        *sum += arr[i]; // Add each element to sum
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;

    // Call the function to calculate sum
    calculateSum(arr, n, &sum);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
