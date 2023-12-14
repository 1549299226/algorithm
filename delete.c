#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{
    int size ;
    printf("请输入数组大小：");
    scanf("%d",&size);
    int *array = (int*)malloc(size * sizeof(int));

    int targeet;
    printf("请输入想要去除的值:");
    scanf("%d",&targeet);

    srand(time(NULL));
    for(int idx = 0; idx < size; idx++)
    {
        array[idx] = rand() % 10+1;
        printf("%d ",array[idx]);
    }
    printf("\n");

    int pos =0;

    for(int idx = 0; idx < size; idx++)
    {
        if(array[idx] != targeet)
        {
            //原地 空间复杂度O(1)
           // array[pos] = array[idx];
            //pos++ ;
            array[pos++] = array[idx];//优化
            printf("%d ",array[idx]);
            
        }
      
    }
    printf("\n");
    

}