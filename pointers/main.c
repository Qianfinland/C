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
    int i = 8;
    printf("Value: %d\n", i);
    printf("Address: %p\n", &i); //
    printf("Value: %d\n", *(&i));
    
    int* pi;
    pi = &i; //pi is the address of type integer
    i = 100;
    printf("Address: %p\n", pi); //pi = &i
    printf("Value: %d\n", *pi); //'pi = *(&i)
    
    // example of pointer arithmetic 
    int a;
    int* pa, pa1;
    pa = &a;
    pa1 = pa + 1; //pa1 and pa is 4 bytes diff
    printf("%d, %d\n", pa, pa1);
    
    int da;
    int* pda, pda1;
    pda1 = pda + 1;
    printf("%d, %d\n", pda, pda1);
    return 0;
}
