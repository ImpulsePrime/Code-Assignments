//Grading system
#include<stdio.h>
int main (){
    int maths,english,physics;
    float average;
    char grade;

    printf("Enter marks for Maths,English and Physics \n");
    scanf("%d%d%d",&maths, &english, &physics);
    
    average= (maths+english+physics)/3;
    
    if(average>=70){
        grade= 'A';
        printf("Your grade is %c of %.0f",grade, average);
    }
    else if(average>=60){
        grade= 'B';
        printf("Your grade is %c of %.0f",grade, average);
    }
    else if(average>=50){
          grade= 'C';
        printf("Your grade is %c of %.0f",grade, average);
    }
    else if(average>=40){
          grade= 'D';
        printf("Your grade is %c of %.0f",grade, average);
    }
    else{
          grade= 'E';
        printf("Your grade is %c of %.0f",grade, average);
    }
    
    return 0;
}