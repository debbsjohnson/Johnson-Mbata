#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, i, n, sum = 0;
    printf("\n%s%s","an array will be created dynamically.\n\n",
    "input an array size n followed by integers: ");
    scanf("%d", &n);
    a = (int*)calloc(n,sizeof(int));
    for (i = 0; i < n; i++){
        printf("enter %d values: ", n);
        scanf("%d",a + i);
    }
    for (i = 0; i < n; i++){
        sum += a[i];
    }
    free(a);
    printf("\n%s%7d\n%s%7d\n\n", "number of elements: ", n,
    "sum of the elements: ",sum);
    
}













#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    
    printf("enter the size you need: ");
    scanf("%d", &n);
    
    ptr =  (int*) calloc(n, sizeof(int));
    
    if (ptr != NULL) {
        for (int i = 0; i < n; i ++){
            printf("enter the score of student: ");
            scanf("%d", ptr + i);
        }
        
        printf("\n++++++++++++scores+++++++++++++\n");
        
        for (int i = 0; i < n; i ++){
            printf("student%d scores = %d\n", i, *(ptr+i));
        } 
    } else{
        printf("memory allocation unsuccessful");
    }
    
    int highscore = 0;
    for (int i = 0; i < n; i++) {
        if (highscore < *(ptr+i)) {
            highscore = *(ptr+i);
        }
    }
    printf("\nhighest score = %d", highscore);


    // free up space allocated . i am done using it.
    // free(ptr);
    
    

    return 0;
}
