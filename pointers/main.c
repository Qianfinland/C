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
    printf("Address: %p\n", &i);
    printf("Value: %d\n", *(&i));
    
    int* pi;
    pi = &i; //pi is the address of type integer
    printf("Address: %p\n", pi); //pi = &i
    printf("Value: %d\n", *pi); //'pi = *(&i)
    return 0;
}
