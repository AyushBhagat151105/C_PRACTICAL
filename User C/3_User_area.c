#include <stdio.h>

#define PI 3.14159

// Function prototype
double calculateArea();

int main() {
    double area;
    
    // Call the function to calculate the area
    area = calculateArea();
    
    // Print the calculated area
    printf("Area of the circle: %.2lf\n", area);
    
    return 0;
}

// Function definition to calculate area of a circle
double calculateArea() {
    double radius;
    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    // Calculate area using the formula: Area = PI * radius * radius
    double area = PI * radius * radius;
    
    return area;
}
