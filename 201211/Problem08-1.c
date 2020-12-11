#include <stdio.h>

// 문제1
// int main(void)
// {
//     int num;

//     for(num=1;num<100;num++)
//     {
//         if(num%7==0 || num%9==0)
//             printf("7 or 9의 배수 : %d \n", num);
//     }

//     return 0;
// }

// 문제2
// int main(void)
// {
//     int num1, num2, result;

//     printf("정수 1 : ");
//     scanf("%d", &num1);

//     printf("정수 2 : ");
//     scanf("%d", &num2);

//     if(num1>num2)
//         result = num1-num2;
//     else
//         result = num2-num1;
    
//     printf("결과 : %d", result);
    
//     return 0;
// }

// 문제3
// int main(void)
// {
//     double kor, eng, mat, avg;

//     printf("국어 점수 : ");
//     scanf("%lf", &kor);
//     printf("영어 점수 : ");
//     scanf("%lf", &eng);
//     printf("수학 점수 : ");
//     scanf("%lf", &mat);

//     avg = (kor + eng + mat) / 3;

//     if(avg >= 90)
//         printf("%f이므로 학점 A!", avg);
//     else if(avg >= 80)
//         printf("%f이므로 학점 B!", avg);
//     else if(avg >= 70)
//         printf("%f이므로 학점 C!", avg);
//     else if(avg >= 50)
//         printf("%f이므로 학점 D!", avg);
//     else
//         printf("%f이므로 학점 F!", avg);

//     return 0;
// }

// 문제4
int main(void)
{
    int num1, num2;

    printf("정수1 : ");
    scanf("%d", &num1);
    printf("정수2 : ");
    scanf("%d", &num2);

    printf("결과 : %d", num1 > num2 ? num1-num2 : num2-num1);

    return 0;
}