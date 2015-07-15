
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b, n1, n2, n3, n4, n5, n6, n7, n8;
    a = 11;
    b = 2;
    n1 = a & b;
    printf("a & b is %d\n", n1);
    n2 = a | b;
    printf("a | b is %d\n", n2);
    n3 = a ^ b;
    printf("a ^ b is %d\n", n3);
    n4 = ~a;
    printf("~a is %d\n", n4);
    n5 = ~b;
    printf("~b is %d\n", n5);
    n6 = a << 2;
    printf("a <<2 is %d\n", n6);
    n7 = a >> 2;
    printf("a << 2 is %d\n", n7);
    n8 = n1 > n2 ? n1 : n2;
    printf("n1 > n2 ? n1 : n2 is %d\n", n8);
    return 0;
}

