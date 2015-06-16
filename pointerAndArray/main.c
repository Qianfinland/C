/* 
 * File:   main.c

 * Created on June 16, 2015, 11:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int arr[3] = {1, 8, 12};
    printf("%d %d", &arr[0], arr); //value of array variable = address of the 1st element
    return 0;
}

