
#include <stdio.h>
#include <stdlib.h>

int main() {

    int size, i , sum = 0;
    printf("Enter the number of the integers:\n");
    scanf("%d", &size);
    int *par;
    par = (int*)malloc(sizeof(int)*size);
    for(i = 0; i< size; i++)
    {
        printf("Enter number[%d]\n", i);
        scanf("%d", &par[i]);
        sum += par[i];
    }
    printf("Sum is %d\n", sum);
    free(par);
    return 0;
}

