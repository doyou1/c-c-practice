#include <stdio.h>

int main(void)
{
    int num, len=0, i;
    int arr[100];

    printf("정수 입력 : ");
    scanf("%d", &num);
    while(num>1)
    {
        arr[len++] = num%2;
        num /= 2;
    }
    arr[len]=1;
    for(i=len;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}