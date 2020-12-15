#include <stdio.h>

int main(void)
{
    int arr[10],flen=0,blen=9,i, temp;
    
    printf("총 10개의 숫자 입력 \n");

    for(i=0;i<10;i++)
    {
        printf("입력 : ");
        scanf("%d", &temp);

        // 홀수이면
        if(temp%2==1)
            arr[flen++] = temp;
        // 짝수이면
        else
            arr[blen--] = temp;
    }

    printf("배열 요소의 출력 : ");
    for(i=0;i<10;i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}