
#include <stdio.h>
#include <stdlib.h>
void selectionSortAlgorithm();
void AscendingOrder();
int main() {
    selectionSortAlgorithm();
    AscendingOrder();
    return 0;
}

void AscendingOrder()
{
    int arr[5] = {20, 12, 10, 15, 2};
    int min, max, i, step;
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
    int min, max, i, step;

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