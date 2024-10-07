//Cube of numbers using for loop
#include<stdio.h>
#include <math.h>
int main(){
    int start,final,cube;
    
    printf("Enter starting value and final value ");
    scanf("%d%d",&start,&final);
    
    if(start<=final){
        for(start;start<=final;start++){
            cube=pow(start,3);
            printf("The cube of %d is %d\n",start,cube);
        }
    }
    else{
        printf("Error starting value should be less than or equal to final value");
        
    }
        
    return 0;
}