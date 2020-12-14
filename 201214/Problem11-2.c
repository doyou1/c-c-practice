#include <stdio.h>

// 문제1
// int main(void)
// {
//     char str[50], i, count=0;

//     printf("영단어 입력 : ");
//     scanf("%s", str);

//     printf("%s \n", str);
//     for(i=0;i<sizeof(str);i++)
//     {
//         if(str[i] == '\0')
//             break;
//         count++;
//     }

//     printf("%d \n", count);

//     return 0;
// }

// 문제1
// int main(void)
// {
//     char voca[100];
//     int len=0;

//     printf("영단어 입력 : ");
//     scanf("%s", voca);

//     while(voca[len] != 0)
//         len++;

//     printf("입력한 영단어의 길이는 %d \n", len);

//     return 0;
// }

// 문제2
// int main(void)
// {
//     char voca[100];
//     int len=0, i;
//     char temp;

//     printf("영단어 입력 : ");
//     scanf("%s", voca);

//     while(voca[len] != '\0')    // 영단어의 길이 계산
//         len++;
    
//     for(i=0;i<len/2;i++)    // 영단어 뒤집기
//     {
//         temp=voca[i];
//         voca[i]=voca[(len-i)-1];    // 뒤의 문자를 앞으로
//         voca[(len-i)-1]=temp;   // 앞의 문자를 뒤로
//     }

//     printf("뒤집힌 영단어 : %s \n", voca);
//     return 0;
// }

// 문제3
int main(void)
{
    char voca[100];
    int len=0, i;
    char max=0;

    printf("영단어 입력 : ");
    scanf("%s", voca);

    while(voca[len] != 0)
        len++;
    
    for(i=0;i<len;i++)
        if(max<voca[i])
            max=voca[i];
    
    printf("가장 큰 아스키 코드 값의 문자 : %c \n", max);

    return 0;
}