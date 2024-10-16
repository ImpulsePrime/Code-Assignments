//Bank loan
#include<stdio.h>
int main(){

    int age, income;
    printf("Enter age and income ");
    scanf("%d%d",&age, &income);
    
    if (age>=21 && income>21000){//checks whether the client is of age and has an income greater than 21000

        printf("Congratulations you qualify for a loan");

    }
    else{//if the user does not meet both criteria

        printf("Unfortunately we are unable to offer you a loan at this time");

    }
    
    return 0;
}