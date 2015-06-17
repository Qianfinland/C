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
    /*printf("%d %d\n", &arr[0], arr); //value of array variable = address of the 1st element
    
    printf("%d %d\n", *arr, arr[0]);  // 1 1     
    printf("%d %d\n", *(arr+1), arr[1]);// 8 8 
    printf("%d %d\n", *(arr+2), arr[2]);//12 12*/
    
    int i;
    /*for(i = 0; i < 3; i++)
        printf("%d %d %d\n", *(arr+i), arr[i], i[arr]);*/
    
    printf("prove array is a pointer and each element can be accessed by pointer\n");
    int *parr;
    parr = arr;
    for(i = 0; i < 3; i++)
        printf("%d %d \n",*(parr+i), parr[i]);
            
    return 0;
}

