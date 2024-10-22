// right a c program to convert temperature kelvin to celcius
#include<stdio.h>
#include<math.h>
int main(){
    float kelvin,celsius;

    printf("Enter temperature in kelvin:");
    scanf("%f",&kelvin);

    celsius=kelvin-273.15;

    printf("%.2f kelvin is equal to %.2f celsius\n",kelvin,celsius);
    return 0;
}
