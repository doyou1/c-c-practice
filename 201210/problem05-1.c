#include <stdio.h>

// 문제1
// int main(void)
// {
//     int x1, x2, y1, y2;
//     int side1, side2;

//     printf("좌 상단의 x,y 좌표 : ");
//     scanf("%d %d", &x1, &y1);
//     printf("우 상단의 x,y 좌표 : ");
//     scanf("%d %d", &x2, &y2);

//     side1 = x2 - x1;
//     side2 = y2 - y1;

//     printf("두 점이 이루는 직사각형의 넓이는 %d 입니다", side1 * side2);

//     return 0;
// }

// 문제2
// int main(void)
// {
//     double num1, num2;

//     printf("실수 1,2 : ");
//     scanf("%lf %lf", &num1, &num2);

//     printf("%f + %f = %f \n", num1, num2, num1+num2);
//     printf("%f - %f = %f \n", num1, num2, num1-num2);
//     printf("%f * %f = %f \n", num1, num2, num1*num2);
//     printf("%f / %f = %f \n", num1, num2, num1/num2);

//     return 0;
// }

// 문제4
// int main(void)
// {
//     char ch;

//     printf("정수 입력 : ");
//     scanf("%d", &ch);

//     printf("정수에 해당하는 아스키코드 : %c", ch);

// }

// 문제5
int main(void)
{
    
    char ch;

    printf("알파벳 입력 : ");
    scanf("%c", &ch);

    printf("아스키코드에 해당하는 정수 : %d", ch);

}