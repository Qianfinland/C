/* 
 * File:   main.c
 * Created on July 9, 2015, 11:00 PM
 */

#include <stdio.h>
#include <stdlib.h>

struct 
{
    unsigned int mem1; //4 bits 1111, max value is 15
    unsigned int mem2;
} ns;

struct 
{
    unsigned int mem1 : 3; //3 bits 111, max value is 7
    unsigned int mem2 : 3;
} sfb;

int main(int argc, char** argv) {
    printf("Size of regular struct = %ld\n", sizeof(ns));//8
    printf("Size of struct with bit field = %ld\n", sizeof(sfb));//4
    
    ns.mem1 = 7;
    sfb.mem1 = 7;
    printf("value of mem1 in ns =%d\n", ns.mem1);//7
    printf("value of mem1 in sfb =%d\n", sfb.mem1);//7
    
    ns.mem2 = 8;
    sfb.mem2 = 8;
    printf("value of mem2 in ns =%d\n", ns.mem2);//8
    printf("value of mem2 in sfb =%d\n", sfb.mem2);//0
    return (EXIT_SUCCESS);
}

