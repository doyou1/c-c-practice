#include <stdio.h>

typedef union ubox  // 공용체 ubox의 정의
{
    int mem1;
    int mem2;
    double mem3;
} UBox;

/*
    공용체 변수가 선언되면,
    공용체를 구성하는 멤버는 각각 할당되지 않고,
    그 중 크기가 가장 큰 멤버의 변수만 하나 할당되어
    이를 공유하게 됨
*/
int main(void)
{
    UBox ubx;   // 8바이트 메모리 할당
    
    ubx.mem1=20;
    //  20
    printf("%d \n", ubx.mem2);

    ubx.mem3=7.15;
    // -1717986918
    // -1717986918
    // 7.15
    printf("%d \n", ubx.mem1);
    printf("%d \n", ubx.mem2);
    printf("%g \n", ubx.mem3);

    return 0;
}