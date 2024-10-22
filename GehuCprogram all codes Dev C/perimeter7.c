// right a c program to find area of perimeter
#include<stdio.h>
#include<math.h>
int main(){
    float side_a,side_b,perimeter;
    printf("Enter the length of side a:");
    scanf("%f",&side_a);

    printf("Enter the length of the side ");
    scanf("%f",&side_b);

    perimeter =2*(side_a + side_b);
    printf("Area of perimeter is %.2f\n",perimeter);
    return 0;
}
