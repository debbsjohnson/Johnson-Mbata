#include <stdio.h>

int main()
{
    int num;

    //print a message 
    printf("enter any number: ");

    //accept an input from a user 
    scanf("%d", &num);

    int result = num * 2;

    //display final result
    printf("result = %d", result);

    return 0;
}