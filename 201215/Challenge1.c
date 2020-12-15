#include <stdio.h>


void odd(const int * ptr, int len)
{
    int i;
    printf("홀수 출력 : ");
    for(i=0;i<len;i++)
    {
        if(ptr[i]%2==1)
            printf("%d ",ptr[i]);
    }
    printf("\n");
}

void even(const int * ptr, int len)
{
    int i;
    printf("짝수 출력 : ");
    for(i=0;i<len;i++)
    {
        if(ptr[i]%2==0)
            printf("%d ",ptr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[10], i;

    printf("총 10개의 숫자 입력 \n");

    for(i=0;i<10;i++)
    {
        printf("입력 : ");
        scanf("%d", &arr[i]);
    }
    odd(arr, 10);
    even(arr, 10);
    
    return 0;
}
