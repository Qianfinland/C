/* 
 * File:   main.c
 * Author: qxzhou
 *
 * Created on June 27, 2015, 11:57 PM
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
    
    for(i=0; i<size;i++) {
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
        sum+=arr[i];
    }
    printf("max is %d\n", max);
    printf("min is %d\n", min);
    printf("average is %d\n", sum/size);
    return 0;
}
