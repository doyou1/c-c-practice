#include <stdio.h>
#include <stdlib.h>

/*
    int atoi(const char * str);     // 문자열의 내용을 int형으로 변환
    long atol(const char * str);    // 문자열의 내용을 long형으로 변환
    double atof(const char * str);  // 문자열의 내용을 double형으로 변환
*/
int main(void)
{
    char str[20];
    printf("정수 입력 : ");
    scanf("%s", str);
    printf("%d \n", str);
    printf("%d \n", atoi(str));

    printf("실수 입력 : ");
    scanf("%s", str);
    printf("%g \n", str);
    printf("%f \n", str);
    printf("%g \n", atof(str));

    return 0;
}