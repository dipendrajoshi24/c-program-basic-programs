// write a c program to calculate area of rectangle (a)using hard coded inputs (b)using inputs supplied by the user.
#include<stdio.h>

int main() {
    int length, width;
    
    // Input the dimensions of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate the area
    int area = length * width;

    // Print the area
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}

