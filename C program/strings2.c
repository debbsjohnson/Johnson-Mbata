












int main()
{
    int num;
    printf("enter a num: ");
    printf("square of number: %d", num*2);
}









#include <stdio.h>
#include <string.h>

int main()
{
    /*char name[10] = "babatunde";
    
    printf("his name is %s\n",name);
    */
    
    /*
    printf("what is your name? ");
    scanf("%s",&name);
    
    printf("\nwelcome %s",name);
    */
    
    char name[20] = getname()
    
    getname(name);
    
    // printf("\nwelcome %s",name);
    
    greet(name);
    
    puts(name);

    return 0;
}
char *getname(){
    char name[20];
    printf("what is your name? ");
    fgets(name,sizeof(name),stdin);
    return name;
}
void greet(char nm[]){
    printf("\nwelcome %s",nm);
}















#include <stdio.h>

int main()
{
    /*char name[10] = "babatunde";
    
    printf("his name is %s\n",name);
    */
    char name[20];
    
    /*
    printf("what is your name? ");
    scanf("%s",&name);
    
    printf("\nwelcome %s",name);
    */
    
    printf("what is your name? ");
    fgets(name,sizeof(name),stdin);
    
    printf("\nwelcome %s",name);

    return 0;
}
