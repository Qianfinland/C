/* 
 * File:   main.c
 *
 * Created on June 23, 2015, 9:50 PM
 */

#include <stdio.h>

int main() {
    char* messages[10] = {"One", "two", "three"};
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("Enter string[%d]:\n", i);
        messages[i] = (char*)malloc(10);//without this have segment fault error
        scanf("%s", messages[i]);
    }
    
    return 0;
}

