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
    int i = 0;
    printf("Value: %d\n", i);
    printf("Address: %d\n", &i);
    printf("Value: %d\n", *(&i));
    return 0;
}
