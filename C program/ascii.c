#include <stdio.h>

int main()
{
    char ary[5];
    int i;
    printf("enter a string: ");
    scanf("%s",ary);
    printf("\nthe string is %s \n\n",ary);
    for (i = 0; i < 5; i++){
        printf("\t%d", ary[i]);
    }
    
    return 0;
}
















#include <stdio.h>

int main()
{
    int num;
    for (num = 1; num <= 100; num ++) {
        if (num % 9 ==0) continue;
        printf("%d\t", num);
    }
    
    
    
    return 0;
}









#include <stdio.h>

int main()
{
    int count1,count2;
    for (count1 = 1, count2 = 0; count1 <= 100; count1 ++){
        printf("enter %d count2: ", count1);
        scanf("%d", &count2);
        if (count2 == 100) break;
    }
    
    
    
    return 0;
}








#include <stdio.h>

int main()
{
    int num;
    
    label1:
        printf("\nenter a number (1): ");
        scanf("%d", &num);
        
        if (num == 1) {
            goto test;
        } else{
            goto label1;
        }
    
    test:
        printf("all done");
    
    return 0;
}









// #include <stdio.h>

// int main()
// {
//     int num1, num2;
//     num2 = 0;
//     do{
//         printf("\nenter a number: ");
//         scanf("%d", &num1);
//         printf("no. is %d", num1);
//         num2++;
//     }while (num1 != 0);
//     printf("\nthe total numbers entered were %d", --num2);
    
    
//     return 0;
// }













// #include <stdio.h>

// int main()
// {
//     int i,j,max;
//     printf("please enter the maximum value \n");
//     printf("for which a table can be printed: ");
//     scanf("%d", &max);
//     for (i = 0, j = max; i <= max; i ++, j ++){
//         printf("\n%d + %d = %d", i, j, i + j);
//     }
    
//     return 0;
// }












// #include <stdio.h>

// int main()
// {
//     int basic;
//     printf("\nplease enter your basic: ");
//     scanf("%d",&basic);
//     switch (basic) {
//         case 200: printf("\nbonus is dollar %d\n",50);
//             break;
        
//         case 300: printf("\nbonus dollar%d\n",125);
//             break;
        
//         case 400: printf("\nbonus dollar%d\n",140);
//             break;
        
//         case 500: printf("\nbonus dollar%d\n",175);
//             break;
        
//         default: printf("\ninvalid entry");
//             break;
//     }
//     return 0;
// }

















// #include <stdio.h>

// int main()
// {
//     char ch;
    
//     printf("\nenter a lower cased alphabet (a-z): ");
//     scanf("%c",&ch);
//     if (ch < 'a' || ch > 'z'){
//         printf("\ncharacter not a lower cased alphabet");
//     } else{
//         switch(ch){
//             case 'a':
//             case 'e':
//             case 'i':
//             case 'o':
//             case 'u':
//                 printf("\ncharacter is a vowel");
//                 break;
//             case 'z':
//                 printf("\nlast alphabet (z) was entered");
//                 break;
//             default:
//                 printf("\ncharacter is a consonant");
//                 break;
//         }
//     }

//     return 0;
// }











// #include <stdio.h>

// int main()
// {
//     int procode;
//     float ordamt, rate = 0.0;
//     printf("\nplease enter product code: ");
//     scanf("%d",&procode);
//     printf("please enter the order amount: ");
//     scanf("%f",&ordamt);
    
//     if (procode == 1){
//         if (ordamt >= 500){
//             rate = 0.12;
//         }
//         else if (ordamt >= 300){
//             rate = 0.8;
//         }
//         else {
//             rate = 0.2;
//         }
//     }
//     else if (procode == 2){
//         if (ordamt >= 2000){
//             rate = 0.10;
//         }
//         else if (ordamt >= 1500){
//             rate = 0.05;
//         }
        
//     }
//     else if (procode == 3){
//         if (ordamt >= 5000){
//             rate = 0.10;
//         }
//         else if (ordamt >= 2500){
//             rate = 0.05;
//         }
        
//     }
    
//     ordamt -= ordamt * rate;
//     printf("the net order amount is %.2f \n",ordamt);
    

//     return 0;
// }
















// conversion of uppercase to lower case
// int main()
// {
//     char c;
//     printf("please enter a character: ");
//     scanf("%c", &c);
//     if (c >= 'A' && c <= 'Z'){
//         printf("lower case character = %c", c + 'a' - 'A');
//     } else{
//         printf("character entered is = %c", c);
//     }
    









#include <stdio.h>

int main()
{
    char alpha[26];
    int i, j;
    for (i = 65, j = 0; i < 91; i++, j++) {
        alpha[j] = i;
        printf("the character now assigned is %c \n", alpha[j]);
    }
    getchar();
    
    return 0;
}









#include <stdio.h>

int main()
{
    for (int i = 65; i<= 90; i++){
        printf("%c \t",i);
    }
    return 0;
}
