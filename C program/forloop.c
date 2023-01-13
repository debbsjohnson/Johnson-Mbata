#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int row = 0; row < 5; row ++) {
        for (int col = 0; col < row; col ++) {
            printf("*\t\n");
        }
    }

    return 0;
}

/*assignment 7: 
using loop, display multiplication table of 3
e.g; 3 x 1 = 3
    3 x 2 = 6
    3 x 3 = 9
    3 x 4 = 12
    3 x 5 = 15
    3 x 6 = 18
    3 x.....12*/


/*#include <stdio.h>

int main()
{
    int num = 3;
    for (int i = 1; i < 13; i ++) {
      for (int sum ; sum < i ; sum++) {
        sum = num * i;
        printf("%d x %d = %d \n", num, i, sum);
              

      }

      
    }
    
    return 0;
}
*/





/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 3;
    for (int i = 1; i < 13; i ++) {
      int sum = num * i;
          printf("%d x %d = %d \n", num, i, sum);
    }
    
    return 0;
}*/








// {
//     for (int count = 0; count < 5; count++) {
//         printf("uche \n");
//     }


// int num;
    // for (num = 0; num <= 21; num += 2)
        // printf("%d,",num);

/*for (int row = 0; row < 6; row ++) {
        for (int col = 0; col < row; col ++) {
            printf("*\t");
        }
        printf("\n");
    }*/

    /*int count = 0;
    
    while (count < 10) {
        printf("%d", count);
        
        count ++;
    }*/

/*int count = 1;
    
    while (count < 10) {
        printf("%d", count);
        
        count +=2;
    }*/

/*int x = 1;
    do{
        printf("%d ",x);
        x++;
    }while(x < 10);
*/

/*//break
    for (int i = 0; i < 10; i ++) {
        if (i == 5) {
            break;
        }
    printf("%d ", i);
    }
    printf("\n");
    
    // continue
    for (int i = 0; i < 10; i ++) {
        if (i == 5) {
            continue;
        }
    printf("%d ", i);
    }
*/