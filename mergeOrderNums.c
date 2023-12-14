#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int * mergeOrderNums(int * nums1 , int nums1size , int * nums2 , int nums2size , int * newNumSize)
{   
    int *newNum = (int *)malloc(sizeof(int) *(* newNumSize));
    memset(newNum , 0 , sizeof(int) *(* newNumSize));
    
        // if (nums1 == NULL || nums2 == NULL)
        // {
        //     return 0;
        // }

        
        printf("\n两数组组合后的新数组：\n");
        

         for (int idx = 0; idx < *newNumSize; idx++)
        {
            if (idx < nums1size )
            {
                newNum[idx] = nums1[idx];
            }

            else
            {
                newNum[idx] = nums2[idx-nums1size];
            }

            printf("%d\t",newNum[idx]);
        }
        printf("\n");

        int pos = 0 ;
        int swap = 0;
    
        for(int pos = 0; pos < *newNumSize - 1; pos++)
        {   
            for(int idx = pos + 1; idx < *newNumSize; idx++)
            
            if(newNum[pos] > newNum[idx])
            {
                swap = newNum[idx];
                newNum[idx] = newNum[pos];
                newNum[pos] = swap;            
            } 

        }

        

        return newNum;
    




}
int main()
{
    int nums1size = 0;
    printf("请输入数组nums1大小:");
    scanf("%d", &nums1size);
    int* nums1 = (int *)malloc(sizeof(int) * nums1size);
    memset(nums1 , 0 , sizeof(nums1));

    int nums2size = 0;
    printf("请输入数组nums2大小:");
    scanf("%d", &nums2size);
    int* nums2 = (int *)malloc(sizeof(int) * nums2size);
    memset(nums2 , 0 , sizeof(nums2));

    int newNumSize = (nums1size + nums2size);
    
    //memset(newNum , 0 , sizeof(newNum));

    srand(time(NULL));

    printf("数组nums1:\n");
    for(int idx = 0; idx < nums1size; idx++)
    {
        nums1[idx] = rand()%100;
        printf("%d\t", nums1[idx]);
    }

    printf("\n");

    printf("数组nums2:\n");
     for(int idx = 0; idx < nums2size; idx++)
    {
        nums2[idx] = rand()%100;
        printf("%d\t", nums2[idx]);
    }

    int *newNum = mergeOrderNums(nums1 , nums1size , nums2 , nums2size , &newNumSize);
    // memset(newNum , 0 , sizeof(newNum));
    
    
    printf("\n");
    
    printf("新的数组为：\n");
    for(int idx = 0; idx < newNumSize; idx++)
    {
        printf("%d\t",newNum[idx]);
    }
    printf("\n");
    free(nums1);
    free(nums2);
    //free(newNum);
    return 0;
}