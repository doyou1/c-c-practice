#include <stdio.h>
#include <string.h>

/*  문자열을 비교하는 함수들 : strcmp, strncmp  */
/*
- strcmp 반환값
> 사전편찬 순서 앞의 문자열이 더 크면 양의 값
> 사전편찬 순서 뒤의 문자열이 더 크면 음의 값
> 앞뒤 문자열이 같으면 0
*/
int main(void)
{
    char str1[20];
    char str2[20];
    printf("문자열 입력 1 : ");
    scanf("%s", str1);

    printf("문자열 입력 2 : ");
    scanf("%s", str2);

    // 문자열이 동일하면 0이므로
    if(!strcmp(str1, str2))
    {
        puts("두 문자열은 완벽히 동일합니다.");
    }
    else
    {
        puts("두 문자열은 동일하지 않습니다.");

        if(!strncmp(str1, str2, 3))
            puts("그러나 앞 세 글자는 동일합니다.");
    }

    return 0;
}