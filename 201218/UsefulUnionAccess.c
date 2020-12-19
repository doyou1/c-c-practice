#include <stdio.h>

typedef struct dbshort
{
    unsigned short upper;
    unsigned short lower;
} DBShort;

/*
    4바이트 메모리 공간을 2바이트씩(short)
    , 그리고 1바이트씩(char) 접근할 수 있음
*/
typedef union rdbuf
{
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
} RDBuf;

/*
    공용체의 유용함 : 다양한 접근방식 제공
    - 하나의 메모리 공간을 둘 이상의 방식으로 접근할 수 있음
*/
int main(void)
{
    RDBuf buf;
    printf("정수 입력 : ");
    scanf("%d", &(buf.iBuf));

    printf("상위 2바이트 : %u \n", buf.sBuf.upper);
    printf("하위 2바이트 : %u \n", buf.sBuf.lower);
    printf("상위 1바이트 아스키 코드 : %c \n", buf.bBuf[0]);
    printf("하위 1바이트 아스키 코드 : %c \n", buf.bBuf[3]);
    
    return 0;
}