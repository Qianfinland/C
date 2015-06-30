/* 
 * File:   main.c
 * Author: qxzhou
 *
 * Created on June 30, 2015, 9:08 PM
 */

#include <stdio.h>
struct Date
{
    int Day;
    int Month;
    int Year;
};

typedef struct Date DATE;
typedef struct Student
{
    int RollNo;
    char Name[25];
    int Class;
    double TotalMarks;
    DATE DOB;
} STUDENT;


int main() {
    STUDENT s1;
    printf("Enter RollNo: ");
    scanf("%d", &s1.RollNo);
    printf("Enter name: ");
    scanf("%s", &s1.Name);
    printf("Enter class: ");
    scanf("%d", &s1.Class);
    printf("Total marks: ");
    scanf("%lf", &s1.TotalMarks);
    printf("Date of Birth(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &s1.DOB.Day, &s1.DOB.Month, &s1.DOB.Year);
    printf("%s (DOB:%d/%d/%d), student with RollNo %d of class %d scored %lf", 
            s1.Name, s1.DOB.Day, s1.DOB.Month, s1.DOB.Year, s1.RollNo,
            s1.Class, s1.TotalMarks);
    return 0;
}

void PrintStudentDetails() 
{

}

