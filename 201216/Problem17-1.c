#include <stdio.h>

void MaxAndMin(int arr[], int len, int *maxPtr, int *minPtr)
{
    int i;
    *maxPtr=arr[0];
    *minPtr=arr[0];
    for(i=0;i<len;i++)
    {
        if(arr[i]>*maxPtr)
            *maxPtr=arr[i];
        if(arr[i]<*minPtr)
            *minPtr=arr[i];
    }
}

int main(void)
{
    int * maxPtr=0;
    int * minPtr=0;
    int arr[5]={1,4,5,3,2};

    printf("%d %d \n", maxPtr, minPtr);
    MaxAndMin(arr, 5, &maxPtr, &minPtr);
    printf("%d %d \n", maxPtr, minPtr);

    return 0;
}