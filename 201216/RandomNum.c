#include <stdio.h>
#include <stdlib.h>

/*  ANSI 표준 난수 생성함수 rand    */
int main(void)
{
    int i;
    printf("난수의 범위 : 0부터 %d까지 \n", RAND_MAX);
    for(int i=0;i<5;i++)
    {
        printf("%d \n", rand());
    }

    return 0;
}