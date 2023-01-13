#include <stdio.h>

int main()
{
    FILE *fptr;
    
    fptr = fopen("new.txt","r");

    char text[1000];

    if (fptr != NULL){
        while(fgets(text, 1000,fptr)){
             printf("%s",text);
        }
    } else{
        printf("file opening unsuccessful!");
    }

    remove("new.txt");

    // file close
    // fclose(fptr);


    return 0;
}







#include <stdio.h>

int main()
{
    FILE *fptr;
    
    fptr = fopen("new.txt","r");

    char text[1000];

    if (fptr != NULL){
        while(!feof(fptr)){
             printf("%s",text);
        }
    } else{
        printf("file opening unsuccessful!");
    }

    remove("new.txt");

    // file close
    // fclose(fptr);


    return 0;
}













#include <stdio.h>

int main()
{
    FILE *fptr;
    
    fptr = fopen("new.txt","r");

    char text[1000];

    if (fptr != NULL){
        while(fgets(text, 1000,fptr)){
             printf("%s",text);
        }
    } else{
        printf("file opening unsuccessful!");
    }

    // file close
    fclose(fptr);


    return 0;
}














#include <stdio.h>

int main()
{
    FILE *fptr;
    
    // create a file 
    fptr = fopen("new.txt", "w");
    
    printf("enter any text: ");
    char text[1000];
    fgets(text, sizeof(text),stdin);
    // writing into a file
    fputs(text, fptr);


    return 0;
}