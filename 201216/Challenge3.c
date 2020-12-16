#include <stdio.h>
#include <stdlib.h>

/*  0~99의 난수 생성 프로그램, %연산자*/
int main(void)
{
    int i;
    printf("난수의 범위 : 0부터 %d까지 \n", RAND_MAX);
    for(int i=0;i<5;i++)
    {
        printf("%d \n", rand()%100);
    }

    return 0;
}