

#include <stdio.h>
#include <string.h>
typedef struct Demos
{
    int n;
    double d;
    char *str;
} DEMOS;

typedef union Demou
{
    int n;
    double d;
    char *str;
} DEMOU;
int main() {
    DEMOS s;
    DEMOU u;
    printf("Demo of difference of between struc and union in size\n");
    printf("%ld %ld %ld\n", sizeof(s.n), sizeof(s.d), sizeof(*s.str));//4 8 8 
    printf("Size of the struct is %ld\n", sizeof(s));//24
    printf("%ld %ld %ld\n", sizeof(u.n), sizeof(u.d), sizeof(u.str));
    printf("Size of the union is %ld\n", sizeof(u));//8
    return 0;
}

