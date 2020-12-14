#include <stdio.h>

// 도전1
/*
    10진수 정수를 입력받아서 16진수로 출력하는 프로그램을 작성해보자.
    이는 서식문자의 활용에 대한 문제
*/
int main(void)
{
    int num;
    printf("정수 입력 : ");
    scanf("%d", &num);

    printf("%x", num);
    return 0;
}