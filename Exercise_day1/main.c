
#include <stdio.h>
void arithmetic();
void increDecre();
void quizScore();
void pseudo();
int main() { 
    
    pseudo();
    //printf("Quiz score exercise:\n");
    //quizScore();
    //printf("increment and decrement operators\n");
    //increDecre();
    
    //printf("Exercise about arithmetic compound operators\n");
    //arithmetic();
    
    //printf("Simple exercises about variables and data types \n");
    //variablesDataTypes();
    
    return 0;
}
void pseudo()
{
    int x, y, p, s, total;
    printf("Enter value of x:\n");
    scanf("%d", &x);
    printf("Enter value of y:\n");
    scanf("%d", &y);
    printf("Compute p = x*y\n");
    p = x*y;
    printf("Compute s = x+y\n");
    s = x + y;
    printf("total=s^2+p*(s-x)*(p+y)\n");
    total = s * s + p * (s - x)*(p + y);
    printf("Total is:%d\n", total);
}
void quizScore()
{
    printf("Results:\n");
    printf("======Quizzes=======\n");
    int s1, s2, s3, ms, fs;
    printf("Enter the score of the quiz 1:");
    scanf("%d", &s1);
    printf("\n");
    printf("Enter the score of the quiz 2:");
    scanf("%d", &s2);
    printf("\n");
    printf("Enter the score of the quiz 3:");
    scanf("%d", &s3);
    printf("\n");
    printf("======Mid-term=======\n");
    printf("Enter the score of the mid-term:");
    scanf("%d", &ms);
    printf("\n");
    printf("======Final=======\n");
    printf("Enter the score of the final:");
    scanf("%d", &fs);
    printf("\n");
    printf("Quiz total:  %d\n", s1 + s2 + s3);
    printf("Mid-term:  %d\n", ms);
    printf("Final:  %d\n", fs);
    printf("..................\n");
    printf("Quiz Total: %d\n", s1 + s2 + s3 + ms + fs);
}
void increDecre()
{
    int a = 10;
    printf("Result:\n");
    printf("The value of a is:%d\n", a);
    printf(".....................\n");
    printf("The value of ++a is:%d\n", ++a);
    printf("Now the value of a is:%d\n", a);
    printf("\n");
    printf("The value of a++ is:%d\n", a++);
    printf("Now the value of a is:%d\n", a);
    printf("\n");
    printf("The value of --a is:%d\n", --a);
    printf("Now the value of a is:%d\n", a);
    printf("\n");
    printf("The value of a-- is:%d\n", a--);
    printf("Now the value of a is:%d\n", a);
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