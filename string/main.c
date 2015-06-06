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
    //scanf("%s", name);
    gets(name);
    //printf("The name you enter is %s\n", name);
    puts( name);
    return (EXIT_SUCCESS);
}

