#include <stdio.h>

void DesSort(int arr[], int len);

int main(void)
{
    int arr[7], len=7, i;

    for(i=0;i<len;i++)
    {
        printf("입력 : ");
        scanf("%d", &arr[i]);
    }

    DesSort(arr, len);

    for(i=0;i<len;i++)
        printf("%d ", arr[i]);
    
    printf("\n");

    return 0;
}

void DesSort(int arr[], int len)
{
    int i,j,temp;

    for(i=0;i<len;i++)
    {
        for(j=0;j<(len-i)-1;j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}