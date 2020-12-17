#include <stdio.h>
#include <string.h>

/*  문자열의 길이를 반환하는 함수 : strlen  */
/*  전달된 문자열의 길이를 반환하되, 널 문자는 길이에 포함하지 않음  */
void RemoveBSN(char str[])
{
    int len=strlen(str);
//    printf("%d %c", str[len-1], str[len-1]);
    // 문자열의 길이를 계산해서 \n이
    // 저장된 위치에 널 문자의 아스키 코드 값 0을 저장시킴
    // \n은 문자열에서 사라짐
    str[len-1]=0;
}

int main(void)
{
    char str[100];
    printf("문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    printf("길이 : %d, 내용 : %s \n", strlen(str), str);

    RemoveBSN(str);
    printf("길이 : %d, 내용 : %s \n", strlen(str), str);

    return 0;
}