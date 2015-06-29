/* 
 * File:   main.c
 * Created on June 29, 2015, 10:51 PM
 */

#include <stdio.h>
 //declare a struct 
 struct Person
    {
     char name[30];
     int age;
     char address[50];
    };
int main() {
    struct Person p1;//instantiate a structure
    printf("Enter name: ");
    gets(p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    scanf("%c");
    printf("Enter address: ");
    gets(p1.address);
    printf("%s with age %d lives in %s\n", p1.name, p1.age, p1.address);
    return 0;
}

