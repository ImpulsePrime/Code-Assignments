//C variables and data types
//Pre processor directive
#include <stdio.h> //printf(), scanf()
int main(){
    //declararion and initialization
    char a;
    char name[]={};
    int age; 
    float area;
    double salary;
    
    printf("Enter a character ");
    scanf("%c",&a);
    printf("The character is %c \n",a);
    
    printf("Enter your name ");
    scanf("%s",&name);
    printf("The string is %s \n",name);
    
    printf("Enter your age ");
    scanf("%d",&age);
    printf("The interger is %d years \n", age);
    
    printf("Enter the area ");
    scanf("%f",&area);
    printf("The floating point is %.4f\n",area);
    
    printf("Enter salary ");
    scanf("%lf",&salary);
    printf("The double is %.2lf", salary);
    
    return 0;
}