#include <stdio.h>

int main(void)
{
    char num1=1, num2=2, result1=0;
    short num3=300, num4=400, result2=0;

    printf("size of num1 & num2 : %d, %d \n", sizeof(num1), sizeof(num2));
    printf("size of num3 & num4 : %d, %d \n", sizeof(num3), sizeof(num4));
    
    /*
        일반적으로 CPU가 처리하기에 가장 적합한 크기의 정수 자료형을 int로 정의함
        따라서 int형 연산의 속도가 다른 자료형의 연산속도에 비해서 동일하거나 더 빠름
    */
    printf("size of char add : %d \n", sizeof(num1+ num2));
    printf("size of short add : %d \n", sizeof(num3+num4));

    result1=num1+num2;
    result2=num3+num4;
    // 1, 2
    printf("size of result & result2 : %d, %d \n", sizeof(result1), sizeof(result2));
    return 0;
}