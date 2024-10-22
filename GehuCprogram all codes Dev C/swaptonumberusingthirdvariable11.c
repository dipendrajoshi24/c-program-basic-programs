// WACP to swap to number using third variable
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input the values of a and b
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Swapping using a third variable
    temp = a;  
    a = b;     
    b = temp;  

    // Output the swapped values
    printf("After swapping, the first number (a) is: %d\n", a);
    printf("After swapping, the second number (b) is: %d\n", b);

    return 0;
}

