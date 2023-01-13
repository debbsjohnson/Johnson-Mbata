/*

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    
    printf("enter the size you need: ");
    scanf("%d", &n);
    
    ptr = malloc(n * sizeof(int));
    
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

    // free up space allocated . i am done using it.
    free(ptr);

    return 0;
}











#include <stdio.h>

int main()
{
    int *ptr;
    
    // using malloc function to allocate memory
    ptr = malloc(sizeof(int));
    
    // find out if memory is allocated
    if(ptr != NULL) {
        printf("dynamic memory allocation is successful");
    } else{
        printf("something went wrong");
    }
    return 0;
}
*/