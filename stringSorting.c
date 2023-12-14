#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 5

int main()
{
    char* array[BUFFER_SIZE] = {"hello","world","nihao","zhangsan","china"};
    if( array == NULL)
        {
            return -1;
        }
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
        {
            printf("%s\t",array[idx]);
        }

    printf("\n");

    for (int idx = 0; idx < BUFFER_SIZE - 1; idx++)
    { 
        for (int jdx = idx + 1; jdx < BUFFER_SIZE; jdx++)
        {
        
        if (strcmp(array[jdx] , array[idx]) < 0) 
            {
                char* str = array[idx];
                array[idx] = array[jdx];
                array[jdx] = str;
            }
        } 
    }

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%s\t",array[idx]);
    }
    printf("\n");
    
    
    return 0;
}