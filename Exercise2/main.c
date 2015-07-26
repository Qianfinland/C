
#include <stdio.h>
#include <stdlib.h>
void loop1();
int main() {
    int i=1, j = 7;
    for(i = 1; i <=7; i++)
    {
        for(j = 7-i; j >= 0; j--)
        {printf("*");}
        printf("\n");
    }
    //loop1();
    return 0;
}

void loop1 () {
    int i, j;
    for (i = 7; i > 0; i--) 
    {
        for (j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
}