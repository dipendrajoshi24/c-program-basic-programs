//WACP to find a area of circle
#include <stdio.h>
int main() {
    int radius;
    float area, PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    area = PI * radius * radius;

    printf("The area of the circle is %.2f\n", area);
    return 0;
}

