#include <stdio.h>
#include <string.h>

/*  문자열을 복사하는 함수들 : strcpy, strncpy  */
int main(void)
{
    char str1[20]="1234567890";
    char str2[20];
    char str3[5];

    /****   case 1  ****/
    strcpy(str2,str1);  // str1의 문자열을 str2에 복사
    puts(str2);     
    // 복사될 배열의 길이가 문자열의 길이보다 작지 않도록 주의!

    /****   case 2  ****/
    // str1에 저장된 문자열을 str3에 복사하되, 
    // str1의 길이가 매우 길다면, sizeof(str3)가 반환한 값에
    // 해당하는 문자의 수 만큼만 복사를 진행해라!
    strncpy(str3,str1,sizeof(str3));
    puts(str3);

    /****   case 3  ****/
    strncpy(str3,str1,sizeof(str3)-1);
    // 배열의 끝에 널문자를 삽입해야 한다!
    str3[sizeof(str3)-1]=0;
    puts(str3);

    return 0;
}