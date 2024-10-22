// C Structure
#include <stdio.h>
#include <string.h>//strcpy

struct student{
    char name[50],reg_no[20],email[30];
    int ID,phone,marks;
    
} student1, student2;
int main() {
    //struct student student1,student2
    //initializing variables
    strcpy(student1.name,"Fidel");
    strcpy(student1.reg_no,"BCS-05-0042/2024");
    strcpy(student1.email,"fdmichuki4850@gmail.com");
    student1.ID= 134858072;
    student1.phone =741064966;
    student1.marks= 89;
    
    printf("Name is %s\n",student1.name);
    printf("Reg no is %s\n",student1.reg_no);
    printf("Email is %s\n",student1.email);
    printf("ID is %d\n",student1.ID);
    printf("Phone number is %d\n",student1.phone);
    printf("Marks are %d\n",student1.marks);
    
    return 0;
}