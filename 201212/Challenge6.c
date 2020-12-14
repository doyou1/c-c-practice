#include <stdio.h>

int main(void)
{
    int second=0;
    printf("초(seconde) 입력 : ");
    scanf("%d", &second);

    int h,m,s;

    s = second%60;
    m = (second-s)%60;
    h = (second - m*60 - s)/3600;

    printf("[h:%d, m:%d, s:%d]", h,m,s);

    return 0;
}