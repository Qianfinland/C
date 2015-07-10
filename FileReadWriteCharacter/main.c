

#include <stdio.h>
int main() {
    FILE *file = fopen("/home/qxzhou/NetBeansProjects/daydaylearning/FileReadWriteCharacter/read.txt", "r");
    if(file == NULL)
    {
        printf("Error on open the file !");
        return 1;
    }
    while(1)
    {
        int ch = fgetc(file);
        if(ch == EOF)
            break;  
        printf("%c", ch);
    }
    
    fclose(file);
    return 0;
}

