#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m1 , m2, m3;
    char grade[5];
    
    printf("enter score: ");
    scanf("%d",&m1);
    printf("enter score: ");
    scanf("%d",&m2);
    printf("enter score: ");
    scanf("%d",&m3);
    
    int per = (m1 + m2 + m3) / 3;
    if (per >= 90){
        grade == "A";
    }
    else if(per == 80 || per < 90){
        grade == "B";
    }
    else if(per == 70 || per < 80){
        grade == "C";
    }
    else if(per == 60 || per < 70){
        grade == "D";
    }
    else if(per == 50 || per < 60){
        grade == "E";
    }
    else{
        grade == "FAIL";
    }
    
    printf(" %d",per);
    printf("\n%s\n = grade", grade);
    
    return 0;
}
