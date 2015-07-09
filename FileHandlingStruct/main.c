/* 
 * File:   main.c
 * Created on July 5, 2015, 3:18 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Student
{
    int RollNo;
    char Name[30];
    double points;
} ;

/*int main() {
    struct Student s1;
    char ch;
    FILE *file = fopen("/home/qxzhou/NetBeansProjects/daydaylearning/FileHandlingStruct/student.txt", "w+");
    if(file == NULL)
    {
        printf("Error in saving student info\n");
        return 1;
    }
    while(1)
    {
        printf("Enter the RollNo: ");
        scanf("%d", &s1.RollNo);
        printf("Enter the name: ");
        scanf("%s", s1.Name);
        printf("Enter the points: ");
        scanf("%lf", &s1.points);
        fprintf(file, "%d\t%s\t%lf\n", s1.RollNo, s1.Name, s1.points);
        
        printf("Continue? (Y/N)");
        do
                ch = getchar();
        while (isspace(ch));
        //printf("ch is %c\n", ch);
        if(ch == 'N' || ch == 'n')
            break;
    }
   
    fclose(file);
    return 0;
}*/

int main() {
    struct Student s1;
    char ch;
    FILE *file = fopen("/home/qxzhou/NetBeansProjects/daydaylearning/FileHandlingStruct/student.txt", "r");
    if(file == NULL)
    {
        printf("Error in reading student info\n");
        return 1;
    }
    while(1)
    {
        fscanf(file, "%d\t%s\t%lf\n", &s1.RollNo, s1.Name, &s1.points);
        printf("\n%d\t%s\t%lf\n", s1.RollNo, s1.Name, s1.points);
        printf("Continue? (Y/N)");
        do
                ch = getchar();
        while (isspace(ch));
        if(ch == 'N' || ch == 'n')
            break;
    }
   
    fclose(file);
    return 0;
}
