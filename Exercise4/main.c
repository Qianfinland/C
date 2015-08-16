
#include <stdio.h>
#include <stdlib.h>
const int c = 5;
void print_2DArray(int arr[][c], int r);
int main() {
    int arr[5][5]= {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    
    print_2DArray(arr,5);
    return 0;
}

void print_2DArray(int arr[][c], int r)
{
    int i, j;
    
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    } 
}