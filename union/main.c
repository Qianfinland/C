

#include <stdio.h>
#include <string.h>

typedef enum
{
    CHAR, SHORT, INTEGER, FLOAT, DOUBLE, STRING
}Type;

typedef union
{
    char Character;
    short Short;
    int Integer;
    float Float;
    double Double;
    char String[30];
} Value;

typedef struct 
{
    Type type;
    Value value;
}Variant;

void Foo(Variant v);
int main( )
{
    Variant v1;
    v1.type = INTEGER;
    v1.value.Integer = 100;
    Foo(v1);//100
    
    printf("Same instance but can be diff data type\n");
    v1.type = STRING;
    strcpy(v1.value.String, "v1 is String now");
    //v1.value.String = "String now";// nooooot work
    Foo(v1);//V1 is string now!
}

void Foo(Variant v)
{
    if(v.type == CHAR)
        printf("%c\n", v.value.Character);
    else if(v.type == SHORT)
        printf("%d\n", v.value.Short);
    else if(v.type == INTEGER)
        printf("%d\n", v.value.Integer);
    else if(v.type == FLOAT)
        printf("%f\n", v.value.Float);
    else if(v.type == DOUBLE)
        printf("%lf\n", v.value.Double);
    else if(v.type == STRING)
        printf("%s\n", v.value.String);
    else
        printf("Error!\n");
}
/*typedef struct Demos
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
}*/

