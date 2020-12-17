#include <stdio.h>

/*  EOF : End Of File, 파일의 끝을 표현하기 위해서 정의해 놓은 상수
    - 함수호출의 실패
    - Windows에서 CTRL+Z키, Linux에서 CTRL+D키가 입력되는 경우
*/

int main(void)
{
    int ch;

    while(1)
    {
        ch=getchar();
        if(ch==EOF)
            break;
        putchar(ch);
    }
    return 0;
}