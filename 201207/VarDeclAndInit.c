#include <stdio.h>




/*
 int num1;
 num1=0;        // 이 문장은 변수의 선언문이 아님
 int num2;      // 컴파일 에러가 발생하는 지점

 num2의 선언문 앞에 변수의 선언이 아닌 문장이 등장했기 때문에 컴파일 에러

*/

int main(void)
{
    int num1, num2;     // 변수 num1, num2의 선언
    int num3=30, num4=40;   // 변수 num3, num4의 선언 및 초기화

    // 쓰레기값
    printf("num1: %d, num2: %d\n", num1, num2);
    num1 = 10;  // 변수 num1의 초기화
    num2 = 20;  // 변수 num2의 초기화
    
    printf("num1: %d, num2: %d\n", num1, num2);
    printf("num3: %d, num4: %d\n", num3, num4);

    return 0;
}