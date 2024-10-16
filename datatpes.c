//C variables and data types

//Pre processor directive
#include <stdio.h> //printf(), scanf()

int main(){
    //declararion and initialization
    char a= 'K';
    char name[]= "Fidel";
    int age= 10; //whole numbers
    float area= 20.035;
    double salary=20000.50;


    printf("The character is %c \n",a);
    printf("The string is %s \n",name);
    printf("The interger is %d years \n", age);
    printf("The floating point is %.3f\n",area);
    printf("The double is %10.2lf", salary);
    
    return 0;
}