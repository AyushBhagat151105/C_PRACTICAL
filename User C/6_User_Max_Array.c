#include <stdio.h>

// Function declaration
int findMax(int arr[], int size);

int main() {
    int array[] = {10, 20, 15, 30, 25};
    int size = sizeof(array) / sizeof(array[0]);

    // Call the function and store the result
    int max = findMax(array, size);

    // Print the maximum element
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

// Function definition
int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the maximum

    // Loop through the array to find the maximum element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Return the maximum element
    return max;
}
