#include <stdio.h>

//#define SQUARE(X) X*X
// 비정상 계산을 막기 위해1
// #define SQUARE(X) (X)*(X)
// 비정상 계산을 막기 위해2
#define SQUARE(X) ((X)*(X))

/*
    매크로 두줄이상 정의
    #define SQUARE(X)   \
            ((X)*(X))
*/
int main(void)
{
    int num=20;

    /* 정상적 결과 출력 */
    printf("Square of num : %d \n", SQUARE(num));
    printf("Square of -5 : %d \n", SQUARE(-5));
    printf("Square of 2.5 : %g \n", SQUARE(2.5));

    /* 비정상적 결과 출력 */
    // 3+2 * 3+2
    printf("Square of 3+2 : %d \n", SQUARE(3+2));
    // (3+2)*(3+2)
    printf("Square of (3+2) : %d \n", SQUARE((3+2)));

    return 0;
}