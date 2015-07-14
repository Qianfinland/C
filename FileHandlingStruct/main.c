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

int main() {
    struct Student s1[3];
    struct Student s2[3];
    char ch;
    //FILE *file = fopen("/home/qxzhou/NetBeansProjects/daydaylearning/FileHandlingStruct/student.txt", "w+");
    FILE *file = fopen("/home/qxzhou/NetBeansProjects/daydaylearning/FileHandlingStruct/studentbinary.dat", "w+b");
    if(file == NULL)
    {
        printf("Error in saving student info\n");
        return 1;
    }
    
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("Enter the RollNo: ");
        scanf("%d", &s1[i].RollNo);
        printf("Enter the name: ");
        scanf("%s", s1[i].Name);
        printf("Enter the points: ");
        scanf("%lf", &s1[i].points);
    }
    fwrite(s1, sizeof(s1[0]), 3, file);
    /****start to read binary file */
    fseek(file, 0, 0);
    fread(s2, sizeof(s2[0]), 3, file);
    for(i=0; i<3; i++)
    {
        
        printf("%d %s %lf\n", s2[i].RollNo, s2[i].Name, s2[i].points);
    }
    /**end of reading binary file */
    fclose(file);
    return 0;
}

/*int main() {
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
}*/
