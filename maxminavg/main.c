/* 
 * File:   main.c
 *
 * Created on June 27, 2015, 11:36 PM
 */

#include <stdio.h>


int main() {
    int arr[10];
    int size, i;
    int max=1000;
    int min=-1000;
    int sum=0;
    printf("Enter the number of the numbers:\n");
    scanf("%d\n", &size);
    if(size>10)
        printf("Invalid size\n");
    
    for(i=0; i<size;i++) {
        printf("Enter a number:");
        scanf("%d", &arr[i]);
    }
    
    
    return 0;
}

