/* 
 * File:   main.c
 * Created on July 9, 2015, 11:00 PM
 */

#include <stdio.h>
#include <stdlib.h>

struct 
{
    int mem1;
    int mem2;
} ns;

struct 
{
    int mem1 : 5;
    int mem2 : 4;
} sfb;

int main(int argc, char** argv) {
    printf("Size of regular struct = %ld\n", sizeof(ns));//8
    printf("Size of struct with bit field = %ld\n", sizeof(sfb));//4
    return (EXIT_SUCCESS);
}

