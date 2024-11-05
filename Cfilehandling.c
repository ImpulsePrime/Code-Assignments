//c file handling
#include<stdio.h>
#include<stdlib.h>

int main(){
    int number;
    FILE*fptr;

    fptr= fopen("C:\\files\\file.txt","w");
    if (fptr== NULL){
        printf("Error opening the file");
        exit(1);
    }
    printf("Enter a number");
    scanf("%d",&number);

    fprintf(fptr,"The number is %d",number);
    fclose(fptr);
    printf("Numbers written successfully");

    return 0;
}