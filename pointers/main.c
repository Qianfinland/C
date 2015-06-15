/* 
 * File:   main.c
 * Author: qxzhou
 *
 * Created on June 10, 2015, 10:25 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int main() {
    int n1, n2, n3;
    n1 = n2 =n3 = 10;
    int* pn2;
    pn2 = &n2;
    
    n3++;
    printf("%d\n", n3);
    Foo(n1, pn2);
    printf("%d %d\n", n1, n2); //10 and 11
    return 0;
}


void Foo(int n, int* pn) {
    n++;
    (*pn)++;
}