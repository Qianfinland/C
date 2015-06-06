/* 
 * File:   main.c
 * Author: qxzhou
 *
 * Created on June 6, 2015, 10:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //array character declare, read and write
    char name[20];
    printf("Enter your name:\n");
    //scanf("%s", name); // not work with multiple words 
    gets(name);
    printf("The name you enter is %s\n", name);
    //puts(name);
    
    //count the length of the string before null
    int count, len;
    /*while(name[count] != '\0') {
        count++;
    }*/
    
    //valid for loop without statement
    for(count=0; name[count] != '\0'; count++); 
    
    
    printf("Length = %d\n",count);
    return (EXIT_SUCCESS);
}

