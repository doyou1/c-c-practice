#include <stdio.h>

// 문제1
// int main(void)
// {
//     int num;

//     printf("정수 입력 : ");
//     scanf("%d", &num);
//     num = ~num;
//     num += 1;
//     printf("%d", num);
// }

// 문제2
int main(void)
{
    // 3 * 8 / 4
    int num=3;
    num = num << 3;     // 8의 곱
    num = num >> 2;     // 4의 제
    printf("%d \n", num);
    return 0;
}