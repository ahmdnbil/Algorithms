#include <stdio.h>
#include <string.h>
void selectionSort (int *ptr,int);

void main()
{

    int arr[6]={1,22,4,63,34,78};
    printf("unsorted array: ");
    for(int i=0;i<6;i++) printf("%d ",arr[i]);
    
    selectionSort(arr,6);
    puts("");
    printf("sorted array: ");
    for(int i=0;i<6;i++) printf("%d ",arr[i]);
}
void selectionSort (int *ptr,int A_intSize)
{
    int local_intMiniIndex,local_intTemp;
    for(int i=0;i<A_intSize-2;i++)
    {
        local_intMiniIndex=i;
        for(int j=i+1;j<A_intSize;j++)
        {
            if(ptr[j]<ptr[local_intMiniIndex])
                local_intMiniIndex=j;
        }
        local_intTemp=ptr[i];
        ptr[i]=ptr[local_intMiniIndex];
        ptr[local_intMiniIndex]=local_intTemp;
    }
}
