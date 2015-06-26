/* 
 * File:   main.c
 * Created on June 26, 2015, 9:45 PM
 */

#include <stdio.h>

void PrintArray(int arr[], int size);
int main() {
    int a1[3] = {1, 2, 3};
    PrintArray(a1, 3);
    int a2[5] = {5, 6, 7, 8, 9};
    PrintArray(a2, 5);
    return 0;
}


void PrintArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
