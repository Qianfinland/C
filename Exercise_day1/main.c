
#include <stdio.h>
void arithmetic();
int main() { 
    printf("Exercise about arithmetic compound operators\n");
    arithmetic();
    
    
    //printf("Simple exercises about variables and data types \n");
    //variablesDataTypes();
    
    return 0;
}

void arithmetic()
{
    int x;	
    int y;	
    x=10;	
    y=5;	
    printf("Result:\n");	
    printf("x value\t y value\t Expressions\t Result\n");	
    printf("%d    |\t", x); printf(" %d     |\t",y); printf(" x+=y\t\t");printf("| x=%d\n",x+y);
    printf("%d    |\t", x); printf(" %d     |\t",y); printf(" x-=y-2\t\t");printf("| x=%d\n",x-(y-2));
    printf("%d    |\t", x); printf(" %d     |\t",y); printf(" x*=y*5\t\t");printf("| x=%d\n",x*y*5);
    printf("%d    |\t", x); printf(" %d     |\t",y); printf(" x/=x/y\t\t");printf("| x=%d\n",x/(x/y));
    printf("%d    |\t", x); printf(" %d     |\t",y); printf(" x%=y\t\t");printf("| x=%d\n",x%y);
}
void variablesDataTypes()
{
    //Exercise 1
    printf("Welcome!\n");
    printf("You are able to test your skill of writing C code here.\n");
    //Exercise 2
    int i = 0;
    for (i; i < 5; i++) {
        printf("*****\n");
    }
    //Exercise 3
    int n1 = 10, n2 = 15;
    float n3 = 12.67;
    printf("n1:%d, n2:%d, n3:%4.2f, n3 with one float: %.1f\n", n1, n2, n3, n3);

    //Exercise 4
    int age;
    printf("Enter your age :\n");
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    //Exercise 5
    int a, b, c;
    printf("Enter three integers\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The numbers forward: %d %d %d\n", a, b, c);
    printf("Reversed order %d %d %d\n", c, b, a);
}