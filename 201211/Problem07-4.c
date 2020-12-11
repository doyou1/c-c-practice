#include <stdio.h>

// 문제1
// int main(void)
// {
//     int num1=0, num2=0, i=0, sum=0;
    
//     // must input num1 > num2
//     printf("정수 1 : ");
//     scanf("%d", &num1);
//     printf("정수 2 : ");
//     scanf("%d", &num2);

//     for(i=num2; i<=num1; i++)
//     {
//         sum += i;
//     }
//     printf("%d ~ %d의 합계 : %d", num2, num1, sum);
//     return 0;
// }

// 문제2
int main(void)
{
    int num=0, sum=1, i;
    printf("정수 입력 : ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        sum *= i;
    }
    printf("%d! : %d", num, sum);

    return 0;
}