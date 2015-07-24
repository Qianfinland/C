
#include <stdio.h>
/*int main() {
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
}*/

int main () 
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    reduce:num--;
    printf("Number is %d\n", num);
    if(num<=0)
        goto stop;
    else
        goto reduce;
    stop:
    return 0;
}
/*if enter 3, output below
        Number is 2
        Number is 1
        NUmber is 0
*/