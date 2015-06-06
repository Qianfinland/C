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
int main() {
    //array character declare, read and write
    char name[20];
    printf("Enter your name:\n");
    //scanf("%s", name); // not work with multiple words 
    gets(name);
    printf("The name you enter is %s\n", name);
    //puts(name);
    
    //count the length of the string before null
    /*int count;
    while(name[count] != '\0') {
        count++;
    }
    
    //valid for loop without statement
    for(count=0; name[count] != '\0'; count++);
    printf("Length = %d\n",count);*/
    
    printf("Length = %d\n",getLength(name));
    return (EXIT_SUCCESS);
}

int getLength(char *pstr) {
    int i;
    for (i=0; pstr[i] !='\0'; i++);
    return i;
}