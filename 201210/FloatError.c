#include <stdio.h>

int main(void)
{
    int i;
    float num=0.0;

    for(i=0;i<100;i++)
        num+=0.1;   // 이 연산을 총 100회 진행하게 됨

    printf("0.1을 100번 더한 결과: %f \n", num);
    //10.0002

    /*
    부동 소수점 오류, 컴퓨터는 실수를 정확하게 표현하지 못한다.
    */
    return 0;
}