/* 
 * File:   main.c
 * Author: qxzhou
 *
 * Created on June 12, 2015, 11:02 PM
 */

#include <stdio.h>
#include <string.h>

/*
 * 
 */
int main() {
    char s1[50], s2[50];
    printf("Enter the first string:\n");
    gets(s1);
    printf("Enter the second string:\n");
    gets(s2);
    //strcpy(s1, s2);
    //strcat(s1, s2);
    //printf("s1= %s\n, length = %d", s1, strlen(s1));
    
    
    //printf("Comparing value of s1 and s2 is %d\n",strcmp(s1, s2));
    //printf("Comparing address of s1 and s2 is %d\n",s1==s2);//when value is same
    //and address is different
    
    printf("%s\n", strstr(s1, s2));
    return 0;
}

