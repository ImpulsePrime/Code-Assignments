//c file handling
#include<stdio.h>
#include<stdlib.h>

int main(){
    int number;
    FILE*fptr;

    fptr= fopen("C:\\files\\file2.txt","r");
    if (fptr== NULL){
        printf("Error opening the file");
        exit(1);
    }
    fscanf(fptr,"%d",&number);
    printf("NUmber is %d",number);

    return 0;
}