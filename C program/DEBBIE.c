#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    struct organisation {
        int empid;
        char name[20][20];
        float salary;
    };
    
int main()
{  
    
    struct organisation employees[5];
    for (int i = 0; i < 5; i++){
        printf("enter your id number: ");
        scanf(" %d", &employees[i].empid);
        
        printf("enter your name: ");
        scanf(" %s %s",&employees[i].name);
        
        printf("enter your salary: ");
        scanf("%f",&employees[i].salary);
    }
    
    for (int i = 0; i < 5; i++){
        printf("\n %d   %s %s    $%.2f\n",employees[i].empid,employees[i].name,employees[i].name,
         employees[i].salary);
    }
    
    float avg = 0;
    float sum = 0;
    int arraysize = 5;
    for (int i = 0; i < arraysize; i++){
        sum = sum + employees[i].salary;
    }
    
    avg = sum / arraysize;
    
    printf("\n\naverage salary of employees is $%.2f",avg);
    
    
    return 0;
}
