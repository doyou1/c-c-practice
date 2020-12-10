#include <stdio.h>

int main(void)
{
    // 0.123400
    printf("%f \n", 0.1234);
    // 1.234000e-001
    printf("%e \n", 0.1234);        // e 표기법 기반의 출력
    // 0.123457
    printf("%f \n", 0.12345678);
    // 1.234568e-001
    printf("%e \n", 0.12345678);    // e 표기법 기반의 출력

    return 0;
}