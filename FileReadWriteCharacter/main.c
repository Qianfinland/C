

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
    
    FILE *file2 = fopen("/home/qxzhou/NetBeansProjects/daydaylearning/FileReadWriteCharacter/write.txt", "w");
    if(file2 == NULL)
    {
        printf("Error on open the file !");
        return 1;
    }
    
    /*char c[1000];
    printf("Enter a sentence to the file!\n");
    fgets(c, sizeof(c), stdin);
    //gets(c);//dangerous to use 
    fprintf(file2, "%s", c);*/
    
    printf("Enter multiple lines of strings and end by ctrl+D\n");
    while(1)
    {
        char ch;
        ch = getchar();
        //putchar(ch);//
        if(ch == EOF)
            break;
        putc(ch, file2);
    }
    fclose(file);
    fclose(file2);
    return 0;
}

