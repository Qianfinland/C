
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if(num%2 == 0)
        goto labeleven;
    else
        goto labelodd;
labeleven:
    printf("Even number\n");
    return 0;
labelodd:
    printf("Odd number\n");
    return 0;
}

