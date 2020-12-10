#include <stdio.h>

int main(void)
{
    int num = 15;   // 00000000 00000000 00000000 00001111
    int num2 = -16; // 11111111 11111111 11111111 11110000

    int result1 = num<<1;   // num의 비트열을 왼쪽으로 1칸씩 이동
    int result2 = num<<2;   // num의 비트열을 왼쪽으로 2칸씩 이동
    int result3 = num<<3;   // num의 비트열을 왼쪽으로 3칸씩 이동

    int result4 = num2>>1;   // num의 비트열을 오른쪽으로 1칸씩 이동
    int result5 = num2>>2;   // num의 비트열을 오른쪽으로 2칸씩 이동
    int result6 = num2>>3;   // num의 비트열을 오른쪽으로 3칸씩 이동

    // 0으로 채워진다
    printf("왼쪽 1칸 이동 결과 : %d \n", result1);
    printf("왼쪽 2칸 이동 결과 : %d \n", result2);
    printf("왼쪽 3칸 이동 결과 : %d \n", result3);

    // 1로 채워진다
    printf("오른쪽 1칸 이동 결과 : %d \n", result4);
    printf("오른쪽 2칸 이동 결과 : %d \n", result5);
    printf("오른쪽 3칸 이동 결과 : %d \n", result6);

    return 0;
}