#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int  size ;
    printf("请输入数组的大小");
    scanf("%d",&size);
    int* array = (int *) malloc(size * sizeof( int ));

    srand(time(NULL));
    for(int idx = 0; idx < size;idx ++)
    {
        array[idx] = rand();
    }

    for (int idx = 0;idx < size;idx ++)
    {
        if(array[idx] > array[idx+1])
        {
            int median=0;
            median = array[idx];
            array[idx] = array[idx+1];
            array[idx+1] = median;
        }
        
    }
    for (int idx = 0 ;idx < size;idx ++ )
    {
        printf("%d ",array[idx]);
    }
}