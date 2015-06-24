/* 
 * File:   main.c
 *
 * Created on June 24, 2015, 9:42 PM
 */

#include <stdio.h>

int main() {
    int arr[2][3] = {1,2,3,4,5,6};//={{1,2,3}, {4,5,6}};
    int r, c;
    for(r=0; r<2; r++) {
        for(c=0;c<3; c++)
            printf("%d ", arr[r][c]);
        printf("\n");//print each row
    }
    return 0;
}

