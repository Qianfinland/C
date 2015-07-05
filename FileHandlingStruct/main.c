/* 
 * File:   main.c
 * Created on July 5, 2015, 3:18 PM
 */

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int RollNo;
    char Name[30];
    double points;
} ;
int main() {
    struct Student s1;
    printf("Enter the RollNo: ");
    scanf("%d", &s1.RollNo);
    printf("Enter the name: ");
    scanf("%s", s1.Name);
    printf("Enter the points: ");
    scanf("%lf", &s1.points);
    
    FILE *file = fopen("/home/qxzhou/NetBeansProjects/daydaylearning/FileHandlingStruct/student.txt", "w+");
    if(file == NULL)
    {
        printf("Error in saving student info\n");
        return 1;
    }
    fprintf(file, "%d\t%s\t%lf\n", s1.RollNo, s1.Name, s1.points);
    
    return 0;
}

