
#include <stdio.h>
void copy();
int main() { 
    printf("Exercise about arithmetic compound operators\n");
    //Exercise 6
    int x;	
    int y;	
    x=10;	
    y=5;	
    printf("Result:\n");	
    printf("x value\t y value\t Expressions\t Result\n");	
    printf("%d    |\t",x);printf(" %d     |",y);printf("\t x=y+3 \t \t| x=%d",y+3);printf("\n");	
    printf("%d    |\t",x);printf(" %d     |",y);printf("\t x=y-2 \t \t| x=%d",y-2);printf("\n");	
    printf("%d    |\t",x);printf(" %d     |",y);printf("\t x=y*5 \t \t| x=%d",y*5);printf("\n");	
    printf("%d    |\t",x);printf(" %d     |",y);printf("\t x=x/y \t \t| x=%d",x/y);printf("\n");	
    printf("%d    |\t",x);printf(" %d     |",y);printf("\t x=x mod y\t| x=%d",x%y);printf("\n");	
    /*printf("Results:");
    int row;
    for(row = 0; row < 6; row++)
    {
        printf("\n");
            if (row == 0 ) 
            {
                printf("x value\t");
                printf("\t");
                printf("y value\t");
                printf("\t");
                printf("expressions\t");
                printf("results\t");
            }
            
            
            if(row == 1 )
            {
                copy();
                printf("x=y+3\t");
                printf("\t");
                printf("x=8\t");
            }
            
            if(row == 2)
            {
                copy();
                printf("x=y-2\t");
                printf("\t");
                printf("x=3\t");
            }
            
            if(row == 3)
            {
                copy();
                printf("x=y*5\t");
                printf("\t");
                printf("x=25\t");
            }
            
            if(row == 4)
            {
                copy();
                printf("x=x/y\t");
                printf("\t");
                printf("x=2\t");
            }
            
            if(row == 5)
            {
                copy();
                printf("x=x%y\t");
                printf("\t");
                printf("x=0\t");
            }
    }*/
    //printf("Simple exercises about variables and data types \n");
    //variablesDataTypes();
    
    return 0;
}

void copy()
{
    printf("10   |\t");
    printf("\t");
    printf("5    |\t");
    printf("\t");
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