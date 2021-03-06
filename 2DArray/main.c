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
    int arr3[2][3][4]={{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{1,2,3,4},{5,6,7,8},{9,10,11,12}}};
    printf("%d\n",arr3[1][2][3]);
    /*initialize and declare 2D array
     * int arr[2][3] = {1,2,3,4,5,6};//={{1,2,3}, {4,5,6}};
    int r, c;
    for(r=0; r<2; r++) {
        for(c=0;c<3; c++)
            printf("%d ", arr[r][c]);
        printf("\n");//print each row
    }*/
    
    //Allow user to enter value for the 2D Array
    int arr[3][Y];
    int arr2[3][Y];
    int sumarr[3][Y];
    int r, c;
    printf("Build and print arr:\n");
    BuildMatrix(arr, 3, 4);//call method
    PrintMatrix(arr, 3, 4);//call method to print
    printf("Build and print arr2:\n");
    BuildMatrix(arr2, 3, 4);
    PrintMatrix(arr2, 3, 4);
    
    for(r=0;r<3;r++) {
        for(c=0;c<4;c++) {
            sumarr[r][c]=arr[r][c] + arr2[r][c];
        }
    }
    printf("sum of the two array is:\n");
    PrintMatrix(sumarr, 3, Y);
    return 0;
}

void BuildMatrix(int ar[][Y], int rows, int cols) {
    int i,j;
    for(i=0;i<rows;i++) {
        for(j=0;j<cols;j++) {
            printf("Enter value row[%d] col[%d]:", i, j);
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