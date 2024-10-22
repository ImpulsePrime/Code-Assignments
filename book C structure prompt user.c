//Cfunction to enter book details
#include <stdio.h>
#include <string.h>

struct book{
    char title[30],author[30],ISBN[13];
    int publicationyear;
    float price;
};
int main() {
    struct book book1;
    printf("Enter book title ");
    scanf("%s",&book1.title);
    
    printf("Enter book author ");
    scanf("%s",&book1.author);
    
    printf("Enter ISBN ");
    scanf("%s",&book1.ISBN);
    
    printf("Enter Year of publication ");
    scanf("%d",&book1.publicationyear);
    
    printf("Enter Price of the book ");
    scanf("%f",&book1.price);
    
    printf("The book title is %s\n",book1.title);
    printf("The book author is %s\n",book1.author);
    printf("The ISBN is %s\n",book1.ISBN);
    printf("The year of publication is %d\n",book1.publicationyear);
    printf("The price of the book is %.2f\n",book1.price);
    
    
    
    return 0;
}