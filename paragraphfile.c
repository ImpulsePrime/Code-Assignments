//Promts the user to write a paragraph and stores it in a file
#include<stdio.h>
#include<stdlib.h>

int main(){
    char paragraph[200],output[200],paragraph2[200];

    FILE*fptr;
    fptr=fopen("C:\\files\\output.txt","w");
    printf("Write a paragraph\n");
    fgets(paragraph,200,stdin);
    fprintf(fptr,"%s",paragraph);
    fclose(fptr);

    fptr=fopen("C:\\files\\output.txt","r");
    fgets(output,200,fptr);
    printf("The paragraph is\n%s",output);
    fclose(fptr);

    fptr=fopen("C:\\files\\output.txt","a");
    printf("Enter second paragraph\n");
    fgets(paragraph2,200,stdin);
    fprintf(fptr,"%s",paragraph2);
    fclose(fptr);

    return 0;

}