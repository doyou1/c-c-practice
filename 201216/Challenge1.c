#include <stdio.h>

int main(void)
{
    int arr[4][4], copyArr[4][4];
    int i,j,num=1;

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            arr[i][j] = num++;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");

    for(int k=0;k<3;k++)
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                copyArr[j][4-1-i]= arr[i][j];
            }
        }
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                arr[i][j] = copyArr[i][j];
            }
        }
    }


    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ", copyArr[i][j]);
        printf("\n");
    }
    printf("\n");

    return 0;
}