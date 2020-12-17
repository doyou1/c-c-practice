#include <stdio.h>

int main(void)
{
    char str[50]="abcdefg";

    // 3부터 끝까지 defg
    printf("%s\n", &str[3]);

    printf("%d\n", !0); //1
    printf("%d\n", !-1); //0
    printf("%d\n", !1); //0

    return 0;
}