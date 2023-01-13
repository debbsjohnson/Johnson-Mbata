// using typedef
#include <stdio.h>
#include <stdlib.h>


typedef struct persons{
    char name[20];
    int age;
    char gender[10];
    float height;
} person;


int main()
{
    person p1;
    strcpy(p1.name, "Raji Mogambo");
    strcpy(p1.gender, "Male");
    p1.age = 32;
    p1.height = 5.7;
    
    // print out
    printf("========== Info ==========\n");
    printf("Name: %s\n", p1.name);
    printf("Gender: %s\n", p1.gender);
    printf("Age: %dyears\n", p1.age);
    printf("Height: %.1f\n", p1.height);


    
    return 0;
}






// using pointers
#include <stdio.h>
#include <stdlib.h>


struct person{
    char name[20];
    int age;
    char gender[10];
    float height;
};


int main()
{
    struct person *ptr_person, person1;
    ptr_person = &person1;
    
    strcpy(ptr_person->name, "Raji Mogambo");
    strcpy(ptr_person->gender, "Male");
    ptr_person->age = 32;
    ptr_person->height = 5.7;
    
    // print out
    printf("========== Info ==========\n");
    printf("Name: %s\n", ptr_person->name);
    printf("Gender: %s\n", ptr_person->gender);
    printf("Age: %dyears\n", ptr_person->age);
    printf("Height: %.1f\n", ptr_person->height);


    
    return 0;
}


















// assignment (using arrays)
#include <stdio.h>
#include <string.h>


struct supermarket{
    char name[15];
    int idnum;
    float price;
};


int main()
{
    struct supermarket sales[3];
    for (int i = 0; i < 3; i ++){
        printf("\nenter goods: ");
        scanf("%s",&sales[i].name);
    
        printf("\nenter id number: ");
        scanf("%d", &sales[i].idnum);
    
        printf("\ninput price of goods: ");
        scanf("%f", &sales[i].price);
    }
    
    printf("==============GOODS==============");
    for (int i = 0; i < 3; i++){
        printf("\n%s : NGN%.2f",sales[i].name, sales[i].price);
    }
    
    
    float sum = 0;
    for (int i =0; i<3; i++){
        sum += sales[i].price;
    }
    
    printf("\n\ngoods sold today is NGN%.2f",sum);



    return 0;
}

















#include <stdio.h>

struct supermarket{
    char name[15];
    int idnum;
    float price;
};

int main()
{
    struct supermarket sales[5] = {
        {"coke", 1, 200},
        {"bread",2, 1200},
        {"biscuit", 3, 600},
        {"water", 4, 100},
        {"sweet",5, 40}
    };
    
    float sum = 0;
    for (int i =0; i<5; i++){
        sum += sales[i].price;
    }
    
    printf("goods sold today is NGN%.2f",sum);
    
    return 0;
}













#include <stdio.h>
#include <string.h>

struct Book{
    char title[50];
    char author[30];
    float price;
    int year;
};


int main()
{
    struct Book book1;
    strcpy(book1.author, "Onyx Z.");
    strcpy(book1.title, "Professional Programmer");
    book1.year = 2021;
    book1.price = 53.4;
    
    
    // display the information 
    printf("========= BOOK INFO =========\n");
    printf("Author : %s\n",book1.author);
    printf("Title : %s\n",book1.title);
    printf("Year : %d\n",book1.year);
    printf("Price : $%.1f\n",book1.price);
    

    return 0;
}
