#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
#if 0
    int median;
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
            median = array[idx];
            array[idx] = array[idx+1];
            array[idx+1] = median;
        }
        
    }
    for (int idx = 0 ;idx < size;idx ++ )
    {
        printf("%d ",array[idx]);
    }
#else
    int median=0;

    int  size ;
    printf("请输入数组的大小");
    scanf("%d",&size);
    int* array = (int *)malloc(size * sizeof( int ));
    memset(array , 0 , sizeof(array));
    
    srand(time(NULL));

    for(int idx = 0; idx < size;idx ++)
    {
        array[idx] = rand() % 10 + 1;
    }

    int tmpData = 0;
    /* 为什么要减一 */
    for (int idx = 0; idx < size - 1; idx++)
    {   
        //jdx < size - 1 - idx
        /* -1:防止越界 防止jdx>=size */
        /* idx: 减少轮数每一轮结束会确定一个值的位置，每轮能少排一次   */
         for ( int jdx = 0; jdx < size - 1 - idx; jdx++)
         {
            if (array[jdx] > array[jdx+1])
            {
                tmpData = array[jdx];
                array[jdx] = array[jdx+1];
                array[jdx+1] = tmpData;
            }
         }

    }
    for (int idx = 0; idx < size; idx++)
    {
        printf("%d ",array[idx]);
    }
    printf("\n");
    
    int counting = 0;
    for(int idx = 0;idx < size - 1; idx++)
    {
        int temp = 0;
        for(int jdx = idx +1; jdx < size ; jdx++) 
            if (array[idx] == array[jdx])
            {
                counting++;
                temp = jdx;
            }
        if(temp !=0 )
        {
            idx = temp;
            temp = 0;
        }
    
    }
    printf("counting:%d\n",counting);
    int count = 0;

    int* newArr = (int *)malloc((size - counting)*sizeof( int ));

    newArr[0] = array[0];
    for(int idx = 0;idx < size ; idx++)
    {

        if(newArr[count] != array[idx])
        {
            count++;
            newArr[count] = array[idx];
        }
        
    }
    for (int idx = 0; idx < (size - counting); idx++)
    {
        printf("%d ",newArr[idx]);
    }
    printf("\n");

#endif
}