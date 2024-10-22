// ciramfrance of circle in c
#include<stdio.h>
#include<math.h>
int main(){
    float pi=3.14;
    int radius=69;
    float Area;
    float circumfrance;

    Area = pi * radius * radius;
    circumfrance =2*pi*radius;

    printf("Area of circle is %f\n",Area);
    printf("Circumfrance of circle is %f\n",circumfrance);
    
    return 0;
}
