#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter any letter: ");
    char letter;
    scanf("%c", &letter);

    switch (letter){
    case 'a':
        case 'A':
    case 'e':
        case 'E':
    case 'i':
        case 'I':
    case 'o':
        case 'O':
    case 'u':
        case 'U':
        printf("%c is a vowel",letter);
        break; 
    default:
        printf("%c is not a vowel", letter);
    }

    return 0;
    /*   assignment 6: using switch case, write the c program that
         asks a user to enter a number between 1-7 and display the respective 
        day     
         1 - today is monday
         2- today is tuesday, etc..
         note: if the user enters anything outside 1-7 then invalid input 
         should be displayed.*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter any number: ");
    int number;
    scanf("%d", &number);
    
    switch (number) {
    case 1:
        printf("today is monday");
        break;
    case 2:
        printf("today is tuesday");
        break;
    case 3:
        printf("today is wednesday");
        break;
    case 4:
        printf("today is thursday");
        break;
    case 5:
        printf("today is friday");
        break;
    case 6:
        printf("today is saturday");
        break;

    case 7:
        printf("today is sunday");
        break;
        
        // default:
            // printf("%d is invalid and does not represent any day.",num);
            
    }
    
    return 0;*\
}
}
