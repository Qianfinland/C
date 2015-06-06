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

//int getLength(char *pstr);
int main() {
    //
    char str1[20];
    char str2[20];
    printf("Enter your first string:\n"); 
    gets(str1);
    printf("Original length of str1 is %d\n", getLength(str1));
    printf("Enter you second string\n");
    gets(str2);
    concat(str1, str2);
    printf("Now str1 is %s\n", str1);
    printf("Now the length of str1 is %d\n", getLength(str1));
    return (EXIT_SUCCESS);
}

int getLength(char *pstr) {
    int i;
    for (i=0; pstr[i] !='\0'; i++);
    return i;
}

int concat(char *original, char *append) {
    int count =0;
    int i;
    while(original[count] !='\0')
        count++;
    
    for(i=0; i<getLength(append);i++)
        original[count+i] = append[i];
    original[count+i] = '\0';
}