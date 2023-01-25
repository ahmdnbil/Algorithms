// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

typedef unsigned int u32;
typedef unsigned char u8;

void bubbleSort(u32 *ptr,u32 size);
int main() {

    //bubble sort
    u32 arr[]={1,4,52,23,2};
    u32 size=sizeof(arr)/sizeof(u32);
    printf("unsorted array: ");
    for(u8 i=0;i<size;i++) printf("%d ",arr[i]);
    bubbleSort(arr,size);
    puts("");
    printf("sorted array: ");
    for(u8 i=0;i<size;i++) printf("%d ",arr[i]);
    return 0;
}

void bubbleSort(u32 *ptr,u32 size)
{
    u32 local_u32Temp;
    for(u8 i=0;i<size-1;i++)
    {
        for(u8 j=0;j<size-1-i;j++)
        {
            if(ptr[j+1] < ptr[j])
            {
                local_u32Temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=local_u32Temp;
            }
        }
    }
}