#include <stdio.h>
#include <string.h>

int main()
{
    int i, n = 0;
    int item;
    char x[10][12];
    char temp[12];
    
    printf("enter each string on a separate line \n\n");
    printf("type 'END' when over\n\n");
    
    do {
        printf("string %d: ", n+1);
        scanf("%s", x[n]);
    } while (strcmp(x[n++], "END"));
    
    n = n-1;
    
    for (item = 0; item < n - 1; ++item){
        for (i = item + 1; i<n; ++i){
            if (strcmp (x[item], x[i]) > 0) {
                strcpy(temp, x[item]);
                strcpy(x[item], x[i]);
                strcpy(x[i], temp);

            }
        }
    }
    
    printf("\nrecorded list of strings: \n");
    for (i = 0; i < n; ++i) {
        printf("\nstring %d is %s", i + 1, x[i]);
    }
    
    return 0;
}
















/*Assignment 9:
use the almighty formula to solve the quadratic equation, given
a = 1
b = -3
c = -2

#include <stdio.h>
#include <math.h>
int main()
{
    float result1 = 0, result2 = 0;
    float a = 1;
    // float b = round(pow(-3,2));
    float b = -3;
    float c = -2;
        
    result1 = (-b + sqrt((b*b)-(4*a*c))) / (2*a);
    result2 = (-b - sqrt((b*b)-(4*a*c)))  / (2*a);
        
    printf("first result of x is %.1f\n", result1);
    printf("second result of x is %.1f\n", result2);

    return 0;
}

*/









/* Multi-dimensional arrays


#include <stdio.h>

int main()
{
    int scores[3] [4] = {
        {87,49,68,80},
        {52,72,61,65},
        {81,83,59,85}
    };
    
    char names[3][5] = {
        "joy",
        "pam",
        "sam"
    };
    
    printf("\tENG\tMTH\tSCI\tPHY\n");
    
    for (int row = 0; row < 3; row ++){
            printf("%s\t", names[row]);
        for (int col = 0; col < 4; col ++){
            printf("%d\t", scores[row][col]);
        }
        printf("\n");
    }
    
    
    int highscore = scores[0][0];
    for (int row = 0; row < 3; row ++) {
        for (int col = 0; col < 4; col ++) {
            if (highscore < scores[row][col]) {
                highscore = scores[row][col];
            }
        }

    }
    printf("\nhighest score in class is %d",highscore);

    return 0;
}

// #include <math.h>
























/*#include <stdio.h>

int main()
{
 // array declaration
    int scores[5];
    int arraysize = sizeof scores / sizeof scores[0];
    // display
    for (int num = 0; num < arraysize; num ++) {
       printf("enter score: ");
       scanf("%d", &scores[num]);
       

    }
    
    printf("\n \n");
    
    
    for (int num = 0, id = 1; num < arraysize; num ++){
        printf("\n student%d scores is %d\n", id ,scores[num]);
        id++;
            
    }
    
    // highest score of the class
    int highscore = scores[0];
    for (int num = 0; num < arraysize; num ++){
        if (highscore < scores[num]) {
            highscore = scores[num];
            
        }
    }
    
    printf("\nhighest score in class is %d",highscore);
        
    // lowest score of the class
    int lowestscore = scores[0];
    for (int num = 0; num < arraysize; num ++){
        if (lowestscore > scores[num]) {
            lowestscore = scores[num];
            
        }
    }
    
    printf("\nlowest score in class is %d",lowestscore);
        
    
    // average score of the class
    float sum = 0;
    float avg = 0;
    for (int i = 0; i < arraysize; i ++) {
        sum = sum + scores[i];
        
    }
    
    avg = sum / arraysize;
    printf("\nthe average score of the class is %.1f\n",avg);


    

    return 0;
}
*/







/*assignment 8: find the lowest score of the class
find the average score of the class*/

/*#include <stdio.h>

int main()
{
    // array declaration
    int scores[5];
    
    // display
    for (int num = 0; num < 5; num ++) {
       printf("enter score: ");
       scanf("%d", &scores[num]);
      
       
    }
    
    printf("\n \n");
    
    for (int num = 0, id = 1; num < 5; num ++){
        printf("\n student%d scores is %d\n", id ,scores[num]);
        id++;
            
    }


    // highest score of the class
    int highscore = scores[0];
    for (int num = 0; num < 5; num ++){
        if (highscore < scores[num]) {
            highscore = scores[num];
            
        }
    }
    
    printf("\nhighest score in class is %d",highscore);
        
    // lowest score of the class
    int lowestscore = scores[0];
    for (int num = 0; num < 5; num ++){
        if (lowestscore > scores[num]) {
            lowestscore = scores[num];
            
        }
    }
    
    printf("\nlowest score in class is %d",lowestscore);
        

     // average score of the class
    int sum = 0, arraysize = 5;
    float avg = 0;
    for (int i = 0; i < 5; i ++) {
        sum = sum + scores[i];
        
    }
    
    avg = sum/arraysize;
    printf("the average score of the class is %.1f\n",avg);



    return 0;
}
*/










#include <stdio.h>

int main()
{
    // array declaration
    int scores[5];
    
    // display
    for (int num = 0; num < 5; num ++) {
       printf("enter score: ");
       scanf("%d", &scores[num]);
      
       
    }
    
    printf("\n \n");
    
    for (int num = 0, id = 1; num < 5; num ++){
        printf("\n student%d scores is %d\n", id ,scores[num]);
        id++;
            
    }
    
    int highscore = scores[0];
    for (int num = 0; num < 5; num ++){
        if (highscore < scores[num]) {
            highscore = scores[num];
            
        }
    }
    
    printf("\nhighest score in class is %d",highscore);
        


    return 0;
}




















// #include <stdio.h>

// int main()
// {
//     // array declaration
//     int scores[5];
    
//     // array initialization
//     int num;
//     scores[0] = 50;
//     scores[1] = 67;
//     scores[2] = 80;
//     scores[3] = 46;
//     scores[4] = 82;
        
//     // display
//     for (num = 0; num < 5; num ++){
//         printf("\n score[%d] = %d", num,scores[num]);
            
//     }

//     return 0;
// }
