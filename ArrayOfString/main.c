/* 
 * File:   main.c
 *
 * Created on June 23, 2015, 9:50 PM
 */

#include <stdio.h>
#include <string.h>//function strlen, strcpy, strcat
#include <stdlib.h>// use malloc

int main() {
    char* messages[5] = {"One", "two", "three"};
    char* allmessages;
    int i;
    int total = 0;
    for(i = 0; i < 5; i++)
    {
        printf("Enter string[%d]:\n", i);
        messages[i] = (char*)malloc(10);//without this have segment fault error
        scanf("%s", messages[i]);
        //gets(messages[i]);
        total += strlen(messages[i]);
    }
    
    allmessages = (char*)malloc(total+1);
    
    strcpy(allmessages, messages[0]);//copy the first string in messages
    
    for(i=1; i<5; i++) //
    {
        strcat(allmessages, " "); //without this no space
        strcat(allmessages, messages[i]);
    }
    printf("%s", allmessages);
    return 0;
}

