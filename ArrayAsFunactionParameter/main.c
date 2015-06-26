/* 
 * File:   main.c
 * Created on June 26, 2015, 9:45 PM
 */

#include <stdio.h>

void PrintArray(int arr[], int size);
void IncreaseArray(int arr[], int size);
void BuildArray(int arr[], int size);
int main() {
    int a1[3] = {1, 2, 3};
    PrintArray(a1, 3);
    int a2[5] = {5, 6, 7, 8, 9};
    IncreaseArray(a2, 5);
    //arr will change due modification in IncreaseArray function
    PrintArray(a2, 5); 
    
    int a3[2];
    BuildArray(a3,2);
    PrintArray(a3,2);
    return 0;
}


void PrintArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void IncreaseArray(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++)
        arr[i]++;
}

void BuildArray(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("Enter array element [%d]:", i);
        scanf("%d", &arr[i]);
    }
}