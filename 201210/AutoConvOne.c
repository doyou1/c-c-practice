#include <stdio.h>

int main(void)
{
/*
    데이터의 표현범위가 보다 넓은 자료형으로의 형 변환은, 
    그 과정에서 데이터의 손실이 발생하지 않지만,
    데이터의 표현범위가 좁은 자료형으로의 형 변환은, 
    그 과정에서 데이터의 손실이 발생할 수 있다.
*/

    double num1=245;
    int num2=3.1415;
    int num3=129;
    char ch=num3;

    // 245.000000
    printf("정수 245를 실수로 : %f \n", num1);
    // 3
    printf("실수 3.1415를 정수로 : %d \n", num2);
    // -127
    printf("큰 정수 129를 작은 실수로 : %d \n", ch);

    return 0;

}