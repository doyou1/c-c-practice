#include <stdio.h>
/*
    필요한 형태대로 단순하게 결합하기 : 매크로 ## 연산자
*/
#define STNUM(Y,S,P)    Y ## S ## P

int main(void)
{
    printf("학번 : %d \n", STNUM(10,65,075));

    return 0;
}
