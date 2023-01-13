int main()
{
    char s[1000];
    int i,n,c=0;
    
    printf("enter the string: ");
    gets(s);
    n = strlen(s);
    
    for (i = 0; i < n/2; i++){
        if (s[i] == s[n-i-1]){
        c++;
        }
    }
    if (c==i){
        printf("string is a palindrome");
    }
    else{
        printf("string is not a palindrome");
    }
    
    
    return 0;
}






#include <stdio.h>
#include <string.h>

void main()
{
    char a, str[81], *ptr;
    printf("\nenter a sentence: ");
    gets(str);
    printf("\nenter character to search for: ");
    a = getchar();
    ptr = strchr(str, a);
    
    printf("\nstring starts at address: %u", str);
    printf("\nfirst occurence of the character is at address: %u", ptr);
    printf("\nposition of first occurence (starting from 0) is: %d", ptr-str);
    return 0;
}















/* assigning values to pointers
#include <stdio.h>

int main()
{
    int a = 5, b = 2;
    int ptr_a = &a, ptr_b = &b;
    
    // true only if they point to the same address
    if (ptr_a == ptr_b) {
        printf("they are the same");
    } 
    
    // returns true if NULL value is stored in ptr_c
    int *ptr_c = NULL;
    if (ptr_c == NULL) {
        printf("yes");
    }
    
    return 0;
}








#include <stdio.h>

int main()
{
    int a = 5, b = 2;
    int ptr_a = &a, ptr_b = &a;
    
    if (ptr_a == ptr_b) {
        printf("they are the same");
    } 
    return 0;
}





#include <stdio.h>

int main()
{
    int x[10] = {4,5,6,12,3,7,2,9,14,3};
    int *ptr_x;
    
    ptr_x = &x;
    
    for (int i = 0; i < 10; i++){
        printf("%d\n", *(ptr_x)++);
    }

    return 0;
}






#include <stdio.h>

int main()
{
    int x[10], *ptr_x;
    
    ptr_x = &x;
    
    x[0] = 10;
    // ptr_x++;
    
    for (int i = 0; i < 10; i++){
        // x[i] = *(ptr_x)++;
        printf("%d\n", *ptr_x);
        // ptr_x++;
    }

    return 0;
}






#include <stdio.h>

int main()
{
    int x[10], *ptr_x;
    
    ptr_x = &x;
    
    x[0] = 10;
    // ptr_x++;
    
    for (int i = 0; i < 10; i++){
        x[i] = *(ptr_x)++;
        printf("%d\n", ptr_x);
        ptr_x++;
    }

    return 0;
}
*/













/*#include <stdio.h>

int main()
{
    // normal variable
    int a = 7;

    // declare pointer variable
    int *b ;

    // storing the address of a in a *b
    *b = &a;

    // updating the value of a
    a = 5;

    // accessing the value of a via pointer and updating it to 2
    *b = 2;
    
    printf("%d\n",a);

    return 0;
}*/





/*#include <stdio.h>

int main()
{
    
    int a = 5;
    int *b = &a;
    a = 3;
    *b = 7;
    
    printf("%d\n",a);

    return 0;
}*/






/*#include <stdio.h>

int main()
{
    int a = 5;
    int b = a;
    b = 3;
    
    printf("%d\n",b);

    return 0;
}*/
