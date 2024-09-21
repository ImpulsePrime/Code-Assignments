//Calculating simple interest
#include <stdio.h>
int main(){
    float principal, interest;
    int time, rate;
    
    printf("Enter the principal ");
    scanf("%f",&principal);
    
    printf("Enter the rate ");
    scanf("%d",&rate);
    
    printf("Enter the time ");
    scanf("%d",&time);
    
    interest= (principal*rate*time)/100;
    printf("The interest is %.2f", interest);
    return 0;
}