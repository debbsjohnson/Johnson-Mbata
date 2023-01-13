#include <stdio.h>
#include <stdlib.h>

int main()
{
    // most valuable client (worked for over 5 years, business 500000)
    int years;
    float bizdone;

    printf("how long have you been with us? /n");
    scanf("%d", &years);

    if (years >= 5) {
        printf("how much worth of business done? \n");
        scanf("%f",&bizdone);
        if (bizdone >= 500000) {
            printf("congratulations! you have been classified as mvc");
        }else {
            printf("sorry! you need to do more business");
        }
    } else {
        printf("sorry! you need more extra years");
    }

    return 0;

}

/* using a for loop write a c program that displays even numbers
 between 0-20 on the same line separated by a comma. 0,2,3,4,5,6*/