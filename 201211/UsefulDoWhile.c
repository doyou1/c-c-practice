#include <stdio.h>

/*
    do~while문은 반복영역이 무조건 한번이상 실행되어야 하는 경우!
*/
int main(void)
{
    int total=0, num=0;

    do
    {
        printf("정수 입력(0 to quit) : ");
        scanf("%d", &num);
        total += num;
    }while(num!=0);
    printf("합계 : %d \n", total);

    return 0;
}