//Cube of numbers using while loop
#include<stdio.h>
#include <math.h>
int main(){
    int start,final,cube;
    
    printf("Enter starting value and final value ");
    scanf("%d%d",&start,&final);
    
    if(start<=final){
        
        while(start<=final){
            cube=pow(start,3);
            printf("The cube of %d is %d\n",start,cube);
            start=start+1;
            
        }
        
    }
    else{
        printf("Error starting value should be less than or equal to final value");
        
    }
        
    return 0;
}