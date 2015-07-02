

#include <stdio.h>
#include <string.h>
typedef struct Demos
{
    int n;
    double d;
    char str[20];
} DEMOS;

typedef union Demou
{
    int n;
    double d;
    char str[20];
} DEMOU;
int main() {
    DEMOS s;
    s.n = 1000;
    s.d = 1000.05;
    strcpy(s.str, "Example of struct");
    printf("%d %lf %s\n", s.n, s.d, s.str);
    DEMOU u;
    u.n = 2000;
    u.d = 2000.05;
    strcpy(u.str, "Example of union");
    printf("%d %lf %s\n", u.n, u.d, u.str);
    
    printf("Demo of difference of between struc and union in size\n");
    printf("%ld %ld %ld\n", sizeof(s.n), sizeof(s.d), sizeof(s.str));
    printf("Size of the struct is %ld\n", sizeof(s));//24
    printf("%ld %ld %ld\n", sizeof(u.n), sizeof(u.d), sizeof(u.str));
    printf("Size of the union is %ld\n", sizeof(u));
    return 0;
}

