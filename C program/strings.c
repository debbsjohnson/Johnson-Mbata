#include <stdio.h>
#include <string.h>

int main()
{
    char name[10] = "uche";
    char person[10];
    
    // string copy
    strcpy(person,name);
    printf("person is %s\n",person);
    
    char surname[12] = "Barnabas";
    printf("%s\n", strupr(surname));
    printf("%s\n", strlwr(surname));
    
    // string concatenation
    char surname[10] = " barnabas";
    printf("fullname of this person is %s\n",strcat(name, surname));

    
    // string length
    printf("surname length is %d\n", strlen(surname));
    printf("%d\n", strcmp("james","samson"));
    
    // string compare
    printf("5 > 3 = %d", 5 > 3);
    
    
    if (strcmp("james","samson") == 0) {
        printf("\nthey are the same\n");
    }else{
        printf("\nthey are not the same\n");
    }
    
    
    // search for character in a string
    char *ret;
    ret = (strchr("kareem benzema",'b'));
    printf("\n%s\n",ret);
    
    // string string
    char sentence[40] = "to err is human but to forgive is divine";
    printf("\noutput string is %s\n", strstr(sentence,"forgive"));
    
    return 0;
}
