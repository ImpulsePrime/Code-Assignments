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
    
    strcpy(book1.title,"Introduction to C programming");
    strcpy(book1.author,"John Smith");
    strcpy(book1.ISBN,"9780131103627");
    book1.price= 49.99;
    book1.publicationyear=2022;
    
    printf("The book title is %s\n",book1.title);
    printf("The book author is %s\n",book1.author);
    printf("The ISBN is %s\n",book1.ISBN);
    printf("The year of publication is %d\n",book1.publicationyear);
    printf("The price of the book is %.2f\n",book1.price);
    
    
    
    return 0;
}