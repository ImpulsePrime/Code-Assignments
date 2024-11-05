//checks if the number is even or odd
#include<stdio.h>

int even (int number){
    if(number%2 ==0){
        return 1;

    }
    else{
        return 0;

    }
}

int main(){
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    if(even( number)){
        printf("The number is even");

    }
    else{
        printf("The number is odd");

    }
    return 0;
}