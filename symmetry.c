#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 50


 
// char delete(char* ptr,int len,char targeet)
// {
//     int size = len;
//     int pos = 0;
//     int count = 0;
//     #if 1  
//     while (count + pos < size)
//     {
//         ptr[pos] = ptr[pos + count];

//         if(ptr[pos] == targeet)
//         {
//             count++;
//         }
//         else
//         {
//             pos++;
//         }

//     }
    
//     printf("len:%d\n",len);
//     #else
//     int idx = 0;
//     while (idx < size)
//     {
//         if(ptr[idx] != targeet)
//         {
//             ptr[pos] = ptr[idx++];
//         }
//         else
//         {
//             idx++;
//         }
//     }
    
//     #endif
//     return size - count;
// }


int main()
{
    char ptr[BUFFER_SIZE];
    memset(ptr,0,sizeof(ptr));
    memset(ptr,0,sizeof(char));
    fgets(ptr,sizeof(ptr),stdin);

    // for(int idx = 0; idx < strlen(ptr); idx++)
    // {
    //     printf("%c", ptr[idx]);
    // }
    printf("旧字符串:%s\n",ptr);

    int len = strlen(ptr);
    printf("len:%d\n",len);

    
    int count = 0;
    
   
    char newarr[BUFFER_SIZE];
    memset(newarr,0,sizeof(newarr));  
    

    // for(int idx = 0; idx < len; idx++)
    // {   
    //     // printf("%s\n",ptr);
    //     if(ptr[idx] >= 'A' && ptr[idx] <= 'Z')
    //     {
    //         ptr[idx] += 32;
    //         // printf("%c",ptr[idx]);
    //     }
    // }
    
    // for(int idx = 0; idx < len; idx++)
    // {
    //     printf("%s\n",ptr);
    //     if(ptr[idx] >= 'a' && ptr[idx] <= 'z')
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         targeet = ptr[idx];
    //         newlen = delete(ptr , len , targeet);
    //         printf("newlen:%d\n",newlen);
    //     }
    // }


    for (int idx = 0; idx < len; idx++)
    {
        if( ptr[idx] >= 'A' && ptr[idx] <= 'Z')
        {
            ptr[idx] += 32;
            newarr[count] = ptr[idx];
            count++; 
        }
        else if(ptr[idx] >= 'a' && ptr[idx] <= 'z')
        {
            newarr[count] = ptr[idx];
            count++; 
        }
    }
    printf("次数:%d\n", count);
    printf("新字符串:%s\n",newarr);
    int pos = 0;
    int start = 0;
    int end = count - 1;
    while(start <= end)
    {
        if(newarr[start] != newarr[end])
        {
            pos++;
            printf("该字符串不是回文串");

            return 0;
        }   
        
        else if(newarr[start] == newarr[end])
        {
            start++;
            end--;
        }
        
    } 
    
    if(pos <= 0)
    {
        printf("该字符串是回文串\n");
    }
    
} 