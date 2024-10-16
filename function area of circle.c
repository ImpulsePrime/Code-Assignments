// Area of a circle using functions

#include <stdio.h>
#include <math.h>

float areacircle(float radius);

int main() {
    float radius;
    
    printf("Enter radius of circle ");
    scanf("%f",&radius);
    
    float area=areacircle(radius);
    
    printf("Area of the circle is %f",area);
    
    return 0;
}
float areacircle(float radius){
    
    float pi=3.142;
    float formula= pi*pow(radius,2);
    
    return formula;
}