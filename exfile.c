//Read name and marks of 5 students
#include<stdio.h>
#include<stdlib.h>

struct student{
    char name [50];
    char grade [3];
};

int main(){
    struct student student1, student2, student3, student4, student5;

    FILE*fptr;
    fptr=fopen("C:\\files\\grade.txt","w");

    printf("Enter student name:");
    fgets(student1.name,50,stdin);
    printf("Enter grade:");
    fgets(student1.grade,3,stdin);

    printf("Enter student name:");
    fgets(student2.name,50,stdin);
    printf("Enter grade:");
    fgets(student2.grade,3,stdin);

    printf("Enter student name:");
    fgets(student3.name,50,stdin);
    printf("Enter grade:");
    fgets(student3.grade,3,stdin);

    printf("Enter student name:");
    fgets(student4.name,50,stdin);
    printf("Enter grade:");
    fgets(student4.grade,3,stdin);

    printf("Enter student name:");
    fgets(student5.name,50,stdin);
    printf("Enter grade:");
    fgets(student5.grade,3,stdin);

    fprintf(fptr,"Student name:%s\nStudent grade:%s\n",student1.name,student1.grade);
    fprintf(fptr,"Student name:%s\nStudent grade:%s\n",student2.name,student2.grade);
    fprintf(fptr,"Student name:%s\nStudent grade:%s\n",student3.name,student3.grade);
    fprintf(fptr,"Student name:%s\nStudent grade:%s\n",student4.name,student4.grade);
    fprintf(fptr,"Student name:%s\nStudent grade:%s\n",student5.name,student5.grade);

    fclose(fptr);

}