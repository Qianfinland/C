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
    for(i = 0; i < 3; i++)
        printf("%d %d %d\n", *(arr+i), arr[i], i[arr]);
    
    printf("prove array is a pointer and each element can be accessed by pointer\n");
    int *parr;
    parr = arr;
    for(i = 0; i < 3; i++)
        printf("%d %d \n",*(parr+i), parr[i]);
     
    printf("Substraction of one pointer from another\n");
    int *p1, *p2;
    /*p1=&arr[0];
    p2=&arr[2];
    printf("%d\n", p2-p1); //(arr+2) - (arr+0) = 2*/
    
    /*printf("example of pointer\n");
    p1= arr;
    p2 = p1+2;
    printf("%d\n", *p2);// should be arr[2] = 12
    printf("%d %d %d\n", p2, arr+2, &arr[2]);*/
    
    p1 = & arr[0];
    p2 = arr;
    //if p1 and p2 are same, value of them are also same, as they point to same address
    if(p1 == p2)
        printf("%d %d\n", *p1, *p2);
    
    printf("2D array with pointer\n");
    int ar1[2][3] = {{1,2,3}, {4,5,6}};
    int (*ptr)[3];
    ptr = ar1;
    printf("%d %d\n", ptr[0],*(ptr+0));
    printf("%d %d\n", ptr[0][2],*(*(ptr+0)+2));//3
    int m,n; //ar1[m][n] = *(*(ar1+m)+n)
    for(m=0; m<2; m++) {
        for(n=0; n<3;n++)
            printf("%d %d\n", ar1[m][n], *(*(ar1+m)+n));
    }
    
    return 0;
}

