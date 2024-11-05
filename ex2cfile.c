//Prompts user to enter a sentence and write it to a data.txt file
#include <stdio.h>
#include <stdlib.h>
int main(){
    char sentence [100];
    char output [100];
    char sentence2[100];

    FILE*fptr;

    fptr= fopen("C:\\files\\data.txt","w");
    printf("Enter sentence\n");
    fgets(sentence,100,stdin);
    fprintf(fptr,"%s",sentence);
    fclose(fptr);


    fptr= fopen("C:\\files\\data.txt","r");
    fgets(output,100,fptr);
    printf("%s",output);


    fptr= fopen("C:\\files\\data.txt","a");
    printf("Enter second sentence\n");
    fgets(sentence2,100,stdin);
    fprintf(fptr,"%s",sentence2);
    fclose(fptr);
}