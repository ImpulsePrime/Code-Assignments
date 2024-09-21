//Caclculating compound interest
#include <stdio.h>
#include <math.h>
int main (){
    float amount,principal,interest,rate,time;
    
    printf("Enter principal ");
    scanf ("%f",&principal);
    
    printf("Enter rate ");
    scanf("%f",&rate);
    
    printf("Enter time ");
    scanf("%f",&time);
    
    amount=principal* pow((1 +rate/100), time);
    interest= amount-principal;
    
    printf("The interest is %.2f",interest);
    
    return 0;
}