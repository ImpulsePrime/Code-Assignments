//Calculate volume and surface area
#include <stdio.h>
#include <math.h>
int main(){
    float radius,height,pi,volume,surface_area;
    pi=3.142 ;
    
    printf("Enter radius ");
    scanf("%f",&radius);
    
    printf("Enter height ");
    scanf("%f",&height);
    
    volume=pi*pow(radius,2)*height;
    printf("The volume is %.2f\n",volume);
    
    surface_area=(2*pi*pow(radius,2))+ (2*pi*height);
    printf("The volume is %.2f",surface_area);
    
    return 0;
}