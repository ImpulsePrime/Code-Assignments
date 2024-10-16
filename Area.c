//Calculates area of a rectangle
#include<stdio.h>

int main(){

    int l, w, area;

    printf("Enter length ");
    scanf("%d", &l);

    printf("Enter width ");
    scanf("%d", &w);

    area= l * w;

    printf("Area is %d", area);

    
    return 0;

}