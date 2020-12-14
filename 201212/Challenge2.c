#include <stdio.h>

// 도전2
/*
    두 개의 정수를 입력받아서 구구단을 출력하는 프로그램을 작성하자!
*/
int main(void)
{
    int start, end, temp, is;
    printf("두 정수 입력 : ");
    scanf("%d %d", &start, &end);

    if(start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }

    while(start<=end)
    {
        is=1;
        while(is<10)
        {
            printf("%dx%d=%d\n", start, is, start*is);
            is++;
        }
        printf("\n");
        start++;
    }
    return 0;
}