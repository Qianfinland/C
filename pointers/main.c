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
    int n1, n2;
    n1 = 1;
    n2 = 2;
    swap(n1, n2);
    printf("In main method: %d and %d\n", n1, n2); 
    return 0;
}


void swap (int n, int m) {
    int tem;
    tem = n;
    n = m;
    m = tem;
    printf("In swap method: %d and %d\n", n, m); 
}