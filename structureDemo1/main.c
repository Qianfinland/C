/* 
 * File:   main.c
 * Created on June 29, 2015, 10:51 PM
 */

#include <stdio.h>

struct DetailedInfo
{
    char career[20];
    int income;
    
};
 //declare a struct 
 struct Person
    {
     char name[30];
     int age;
     char address[50];
     struct DetailedInfo details;
    };
int main() {
    struct Person p1;//instantiate a structure
    printf("Enter name: ");
    gets(p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    scanf("%c");//without this cannot enter address
    printf("Enter address: ");
    gets(p1.address);
    printf("%s with age %d lives in %s\n", p1.name, p1.age, p1.address);
    printf("Enter career and income: ");
    scanf("%s %d", &p1.details.career, &p1.details.income);
    printf("%s works as %s and earns %d per month", p1.name, p1.details.career, p1.details.income);
    return 0;
}

