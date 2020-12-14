#include <stdio.h>

/*
    지역변수에 static 선언이 붙게되면?
    - 전역변수의 성격을 가지게 된다
    -- 선언된 함수 내에서만 접근이 가능하다. (지역변수 특성)
    -- 딱 1회 초기화되고 프로그램 종료 시까지 메모리 공간에 존재한다. (전역변수 특성)

    -- static으로 선언된 지역변수는 전역변수와 동일한 시기에 할당되고 소멸됨.
    -- 단, 지역변수와 마찬가지로 선언된 함수 내에서만 접근이 가능함.
*/
void SimpleFunc(void)
{
    static int num1=0;  // 초기화하지 않으면 0 초기화
    int num2=0;         // 초기화하지 않으면 쓰레기 값 초기화
    num1++, num2++;
    printf("static : %d, local : %d \n", num1, num2);
}

int main(void)
{
    int i;
    for(i=0; i<3; i++)
        SimpleFunc();
    return 0;
}