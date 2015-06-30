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

void PrintStudentDetails(STUDENT s);
STUDENT ReadStudentDetails();
void ChangeMarks(STUDENT *pstu);
int main() {
    STUDENT s1;
    s1 = ReadStudentDetails();
    PrintStudentDetails(s1);
    //PrintStudentDetails(s1);// test value of RollNo changes or not
    ChangeMarks(&s1);
    PrintStudentDetails(s1);
    return 0;
}

STUDENT ReadStudentDetails()
{
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
    return s1;
}
void PrintStudentDetails(STUDENT s) 
{
    printf("%s (DOB:%d/%d/%d), student with RollNo %d of class %d scored %lf\n", 
            s.Name, s.DOB.Day, s.DOB.Month, s.DOB.Year, s.RollNo,
            s.Class, s.TotalMarks);
    s.RollNo = 1000;// modify member value
}

void ChangeMarks(STUDENT *pstu)
{
    printf("Enter the new Marks: ");
    scanf("%lf", &(*pstu).TotalMarks);
}