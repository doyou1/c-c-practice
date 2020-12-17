#include <stdio.h>

/*
    // 문자 입력 함수
    int getchar(void);
    int fgetc(FILE * stream);

    // 문자 출력 함수
    int putchar(int c);
    int fputc(int c, FILE * stream);

    // 반환형이 int이고, int형 변수에 문자를 담는 이유는?
    - EOF는 -1로 정의된 상수, char 반환형이라면 EOF가
    엉뚱한 양의 정수로 형변환 될 수 있다. 그래서 어떠한 상황에서도
    -1을 인식할 수 있는 int형으로 반환하는 것이다.
*/
int main(void)
{
    int ch1, ch2;

    ch1=getchar();  // 문자 입력
    ch2=fgetc(stdin);   // 엔터키 입력
    putchar(ch1);   // 문자 출력
    fputc(ch2, stdout); // 엔터키 출력

    return 0;
}