#include <stdio.h>

void Snall(int arr[][50], int len)
{
    int k=0,count=0;

    while(k < len-2)
    {
        // 가로+
        for(int i=k;i<len-k;i++)
        {
            arr[k][i] = ++count;
        }

        // 세로+
        for(int i=k+1;i<len-k;i++)
        {
            arr[i][(len-1)-k] = ++count;
        }

        // 가로-
        for(int i=(len-2)-k;i>=k;i--)
        {
            arr[(len-1)-k][i] = ++count;
        }

        // 세로-
        for(int i=(len-2)-k;i>=k+1;i--)
        {
            arr[i][k] = ++count;
        }

        k++;
    }
}

int main(void)
{
    int arr[50][50]={ 0 }, num;

    printf("정수 입력 : ");
    scanf("%d", &num);

    Snall(arr, num);

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}