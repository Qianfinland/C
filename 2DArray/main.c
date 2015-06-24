/* 
 * File:   main.c
 *
 * Created on June 24, 2015, 9:42 PM
 */

#include <stdio.h>
#define Y 4
void BuildMatrix(int ar[][Y], int rows, int cols);
void PrintMatrix(int ar[][Y], int rows, int cols);
int main() {
    /*initialize and declare 2D array
     * int arr[2][3] = {1,2,3,4,5,6};//={{1,2,3}, {4,5,6}};
    int r, c;
    for(r=0; r<2; r++) {
        for(c=0;c<3; c++)
            printf("%d ", arr[r][c]);
        printf("\n");//print each row
    }*/
    
    //Allow user to enter value for the 2D Array
    int arr[3][4];//decalre 2D array
    int r, c;
    BuildMatrix(arr, 3, Y);//call method
    PrintMatrix(arr, 3, Y);//call method to print
    return 0;
}

void BuildMatrix(int ar[][Y], int rows, int cols) {
    int i,j;
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            printf("Enter value %d row %d col:", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
}

void PrintMatrix(int ar[][Y], int rows, int cols) {
    int r, c;
    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++)
            printf("%d ", ar[r][c]);
        printf("\n");
    }
}