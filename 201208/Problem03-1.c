#include <stdio.h>

//문제1
// int main(void)
// {
//     int num1, num2, result1, result2;

//     printf("정수 1:");
//     scanf("%d", &num1);

//     printf("정수 2:");
//     scanf("%d", &num2);


//     result1 = num1 - num2;
//     result2 = num1 * num2;

//     printf("%d - %d = %d \n", num1, num2, result1);
//     printf("%d * %d = %d \n", num1, num2, result2);
//     return 0;
// }

//문제2
// int main(void)
// {
//     int num1, num2, num3, result;
//     printf("정수 1 2 3 : ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     result = num1 * num2 + num3;

//     printf("%d x %d + %d = %d", num1,num2,num3,result);
//     return 0;
// }

//문제3
// int main(void)
// {
//     int num, result;

//     printf("정수 1 : ");
//     scanf("%d", &num);

//     result = num * num;

//     printf("%d x %d = %d", num, num, result);

//     return 0;
// }

//문제 4
// int main(void)
// {
//     int num1, num2, result1, result2;

//     printf("정수 1 2 : ");
//     scanf("%d %d", &num1, &num2);

//     result1 = num1 / num2;
//     result2 = num1 % num2;

//     printf("%d / %d의 몫 : %d \n", num1, num2, result1); 
//     printf("%d / %d의 나머지 : %d \n", num1, num2, result2); 
// }

//문제 5
int main(void)
{
    int num1, num2, num3, result;
    printf("정수 1 2 3 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result = (num1-num2) * (num2+num3) * (num3%num1);

    printf("(%d-%d) x (%d+%d) x (%d%%%d) = %d", num1, num2, num2, num3, num3, num1, result);

    return 0;
}