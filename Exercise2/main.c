
#include <stdio.h>
#include <stdlib.h>
void loop1();
void sameAsLoop1();
void loop2();
void loop3();
int main() {
    
    loop3();//sameAsLoop3();
    //loop2();
    //loop1();
    //sameAsLoop1();
    return 0;
}
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