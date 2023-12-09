#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int size ;
    printf("请输入数组的大小：\n");
    scanf("%d",&size);
    int *array= (int* ) malloc(size* sizeof(int));
    for (int idx = 0; idx < size; idx ++)
    {
        printf("请输入数组的内容：\n");
        scanf("%d",&array[idx]);
    }
    // int len = sizeof(array);
    printf("请输入和为多少：\n");
    int targeet;
    scanf("%d",&targeet);
    for (int idx = 0 ; idx < size ; idx ++)
    {
        for (int num = idx+1 ; num < size ; num ++)
        {
            if ( (array[idx] + array[num]) == targeet)
            {     
                printf("第%d + 第%d = %d\n",idx,num,targeet); 
                //return (idx,num);
            }
        }
    }
    printf("没有两数之和等于%d",targeet);
}