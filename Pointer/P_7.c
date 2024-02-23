// #include<stdio.h>

// void main(){
//     int n[3],i;
//     int *p[3];
//     for (i = 1; i <= 3; i++)
//     {
//         printf("Enter any Number:");
//         scanf("%d",&n[i]);
//         p[i]=&n[i];
//     }
//     for ( i = 3; i >= 1; i--)
//     {
//         printf("\n value %d",*p[i]);
//         printf("\n Address %u",p[i]);
//     }
    
// }

#include <stdio.h>

void printReverse(int *arr, int n) {
    // Pointer to the last element of the array
    int *ptr = arr + n - 1;
    
    // Print elements in reverse order
    printf("Elements of the array in reverse order:\n");
    while (ptr >= arr) {
        printf("%d ", *ptr);
        ptr--;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printReverse(arr, n);
    
    return 0;
}
