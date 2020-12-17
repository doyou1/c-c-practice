#include <stdio.h>

/*
    fgets함수는 엔터인 \n 까지도 문자열의 일부로 받아들임
*/
int main(void)
{
    char str[7];
    int i;

    for(i=0;i<3;i++)
    {
        fgets(str, sizeof(str), stdin);
        printf("Read %d : %s \n", i+1, str);
    }

    return 0;
}