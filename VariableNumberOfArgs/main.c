
#include <stdio.h>
#include <stdarg.h>
int sum(int size, ...)
{
    int i;
    int sum = 0;
    va_list lst;
    va_start(lst, size); //initialize lst with number of argument size
    for(i = 0; i < size; i++)
    {
        int number = va_arg(lst, int); 
        sum += number;
    }
    
    va_end(lst);
    return sum;
    
}
int main() {
    printf("Sum = %d\n", sum(1,2));
    //printf("Sum = %d\n", sum(5,6));
    return 0;
}

