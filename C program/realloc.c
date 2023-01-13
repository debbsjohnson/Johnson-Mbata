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
        
        printf("enter 1 to get more memory: ");
        int choice;
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("how many more do you need?: ");
            int more;
            scanf("%d", &more);
            // reallocating more memory
            ptr = (int*) realloc(ptr, more * sizeof(int));
            
            if (ptr != NULL) {
                for (int i = n; i < (more + n); i ++){
                    printf("\nenter the score of student: ");
                    scanf("%d", ptr + i);
            
                }
                
                printf("\n++++++++++++scores+++++++++++++\n");
        
            for (int i = 0; i < (more + n); i ++){
                printf("student%d scores = %d\n", i, *(ptr+i));
            } 
            }
        }
        
        
    } else{
        printf("memory allocation unsuccessful");
    }
    
    

    // free up space allocated . i am done using it.
    // free(ptr);
    
    

    return 0;
}
