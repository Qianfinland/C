#include <stdio.h>
#include "sum.h"
#include "sum.h"
int main() {
    int n1= 10, n2=50, result;
    result = Add(n1, n2);
    printf("Sum is %d\n", result);
    printf("Call foo fucntion that use sum.c file to add 1 and 2\n");
    foo();
    return 0;
}

