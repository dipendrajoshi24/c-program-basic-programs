// convert temperature celsius to fahrenheit
#include<stdio.h>
#include<math.h>
int main(){
    float celsius,fahrenheit;

    printf("Enter temperature in celsius:");
    scanf("%f",&celsius);

    fahrenheit=(celsius *9/5)+32;

    printf("Temperature in fehrenheit :%.2f\n",fahrenheit);
    
    return 0;
}
