
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void loop1();
void sameAsLoop1();
void loop2();
void loop3();
void instruct();
int main() {
    
    instruct();
    char answer;
    int a,b, n;
    do
    {
        printf("Enter a number(1-5): ");
        scanf("%d", &n);
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        if(n==1)
        {add(a,b);}
        else if(n==2)
        {substract(a,b);}
        else if(n==3)
        {multiply(a,b);}
        else if(n==4)
        {divide(a,b);}
        else if(n==5)
        {module(a,b);}
        else
        {printf("Error\n");}
        printf("Continue?(y/n)");
        scanf("%s", &answer);
    }while(answer=='y' || answer=='Y');
 
    /*int n, i;
    int arr[n];
    printf("Enter number of positive numbers: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++) 
    {
        printf("Enter number[%d]: ", i);
        scanf("%d", &arr[i]);
        if (arr[i] < 0)
            break;
    }*/
    //loop3();//sameAsLoop3();
    //loop2();
    //loop1();
    //sameAsLoop1();
    return 0;
}

void instruct()
{
    printf("Calculator menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3, Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
}
int add(int a, int b)
{printf("Result: %d\n", a+b);return a+b;}

int substract(int a, int b)
{printf("Result:%d\n", a-b);return a-b;}

int multiply(int a, int b)
{printf("Result:%d\n", a*b);return a*b;}

int divide(int a, int b)
{printf("Result:%d\n", a/b);return a/b;}

int module(int a, int b)
{printf("Result:%d\n", a%b);return a%b;}


void sameAsLoop3()
{
    int i, j;
    for (i = 1; i <= 9; i = i + 2) {
        for (j = 1; j <= i; ++j) printf("*");
        printf("\n");
    }
    for (i = 9; i >= 1; i = i - 2) {
        for (j = i; j >= 1; --j) printf("*");
        printf("\n");
    } 
}
void loop3()
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 2 * i - 1; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 5; i >= 1; i--) {
        for (j = 2 * i - 1; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
}
void loop2()
{
    int m, n, o;
    for (m = 1; m <= 7; m++) {
        for (n = 1; n <= m; n++) {
            printf("%d", n);
        }
        for (o = 7 - m; o > 0; o--) {
            printf("*");
        }
        printf("\n");
    }
}
void loop1 () {
    int i, j;
    for (i = 7; i > 0; i--) 
    {
        for (j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
}

void sameAsLoop1()
{
    int i = 1, j = 7;
    for (i = 1; i <= 7; i++) {
        for (j = 7 - i; j >= 0; j--) {
            printf("*");
        }
        printf("\n");
    }
}