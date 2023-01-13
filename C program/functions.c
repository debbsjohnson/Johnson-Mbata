// call by reference
#include <stdio.h>

int main()
{
    int x = 6, y = 2;
    printf("before swap: x = %d, y = %d\n", x, y);
    swap(&x,&y);
    printf("at the end of the swap: x = %d, y = %d", x, y);
    return 0;
}

void swap(int *x, int *y){
    int *temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("after swap x = %d, y = %d \n", *x, *y);
    





// call by value
#include <stdio.h>

int main()
{
    int x = 6, y = 2;
    printf("before swap: x = %d, y = %d\n", x, y);
    swap(x,y);
    printf("at the end of the swap: x = %d, y = %d",x,y);
    return 0;
}

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("after swap x = %d, y = %d \n",x,y);
    
    


















#include <stdio.h>
#include <stdlib.h>

// function prototype
int subtract(int x, int y);

// global variable
int z = 50;

int main()
{
    // function invocation
    greet();
    // add(50,26);
    // add(341,798);
    // addition();
    printf("result is %d\n",subtract(54, 43));
    printf("%d",z);
    return 0;

}

// function definition
void greet() {
    printf("good day sir/ma.\n");
}

// add 2 numbers 
void add (int a, int b){
    int sum = a + b;
    printf("the sum of %d and %d is %d\n",a,b,sum);
}

void addition() {
    int x, y;
    
    printf("enter a number: ");
    scanf("%d", &x);
    
    printf("enter another number: ");
    scanf("%d", &y);
    
    int sum = x + y;
    printf("the sum of %d and %d is %d\n",x,y,sum);
}

// function that returns a value
int subtract(int x, int y){
    return x - y;
    
    subtract(x,y);
}
   
