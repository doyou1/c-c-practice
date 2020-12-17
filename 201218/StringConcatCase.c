#include <stdio.h>
#include <string.h>

/*  문자열을 덧붙이는 함수들 : strcat, strncat  */
int main(void)
{
    char str1[20]="First~";
    char str2[20]="Second";

    char str3[20]="Simple num : ";
    char str4[20]="1234567890";

    /****   case 1  ****/
    strcat(str1, str2);
    puts(str1);

    /****   case 2 ****/
    // str3에 str4에 저장된 문자열 7개와 널문자 포함해서 8개의 문자 덧붙임
    strncat(str3, str4, 7);
    puts(str3);

    return 0;
}