#include <stdio.h>

int main(void)
{
    char str[100];
    int flen=0, blen=0,i;
    int check = 1;

    printf("문자열 입력 : ");
    scanf("%s", str);

    while(str[blen] != 0){
        blen++;
    }

    for(i=0;i<blen/2;i++)
    {
        if(str[flen++] != str[--blen])
        {
            check = 0;
            break;
        }
    }

    if(check)
        printf("회문입니다");
    else
        printf("회문이 아닙니다");
    
    return 0;
}