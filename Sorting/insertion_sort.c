#include <stdio.h>
#include "./BIT_MATH.h"
#include "./STD_TYPES.h"

void insertionSort(u32*arr,u32 A_u32Size);

void main(void)
{
    u32 arr[]={23 ,235,1,89,34};
    u32 local_u32Size=sizeof(arr)/sizeof(u32);
    printf("Unsorted array:");
    for (u8 i=0;i<local_u32Size;i++) printf("%d ",arr[i]);
    
    puts("");
    insertionSort(arr,local_u32Size);

    printf("Sorted array:");
    for (u8 i=0;i<local_u32Size;i++) printf("%d ",arr[i]);
}

void insertionSort(u32*arr,u32 A_u32Size)
{
    u32 local_u32Value,local_u32Hole;

    for (u8 i=1; i < A_u32Size; i++)
    {
        local_u32Value=arr[i];
        local_u32Hole=i-1;
        while(local_u32Hole>=0 && arr[local_u32Hole]>local_u32Value)
        {
            arr[local_u32Hole + 1]=arr[local_u32Hole];
            local_u32Hole=local_u32Hole-1;
        }
        arr[local_u32Hole+1]=local_u32Value;
    }
    
}