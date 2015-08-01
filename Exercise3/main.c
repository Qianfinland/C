
#include <stdio.h>
#include <stdlib.h>
void selectionSortAlgorithm();
void AscendingOrder();
void multiplicationTable();
void pickupMaxMin();
int main() {
    pickupMaxMin();
    multiplicationTable();
    selectionSortAlgorithm();
    AscendingOrder();
    return 0;
}

void pickupMaxMin()
{
    int a[3], i, max, step;
    printf("Enter three integer numbers\n");
    scanf("%d %d %d", &a[0], &a[1],&a[2]);
    //ascending order those numbers
    for(i=0; i<3; i++)
    {
        for(step=1+i;step < 3; step++)
        {
            if(a[i] > a[step])
            {
                max = a[i];
                a[i] = a[step];
                a[step] = max;
                
            }
        }
    }
    printf("numbers printed as ascending order:\n");
    for(i=0; i< 3; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nThe smallest number is %d\n", a[0]);
    printf("The  largest number is %d\n", a[2]);
}
void multiplicationTable()
{
    int i, j;
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            printf("%d*%d=%d\t", j, i, j*i);
        }
        printf("\n");
    }
}
void AscendingOrder()
{
    int arr[5] = {20, 12, 10, 15, 2};
    int min, i, step;
    for (i = 0; i < 5; i++) {
        for (step = i + 1; step < 5; step++) {
            if (arr[i] > arr[step]) {
                min = arr[i];
                arr[i] = arr[step];
                arr[step] = min;
            }
        }
    }
    printf("Ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionSortAlgorithm()
{
    int arr[5] = {20, 12, 10, 15, 2};
    int max, i, step;

    for (i = 0; i < 5; i++) {
        for (step = i + 1; step < 5; step++) {
            if (arr[i] < arr[step]) {
                max = arr[step];
                arr[step] = arr[i];
                arr[i] = max;

            }
        }
    }
    printf("Descending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}