#include <stdio.h>

// 문제1 - 방법1
// int main(void)
// {
//     int num=1, sum=0;

//     while(num != 0)
//     {
//         num=0;   // 불필요
//         printf("정수 입력(0 to quit) : ");
//         scanf("%d", &num);

//         sum+=num;
//     }

//     printf("합계 : %d \n", sum);
//     return 0;
// }

// 문제1 - 방법2
// int main(void)
// {
//     int num=0,sum=0;
//     printf("정수입력(0 to quit) : ");
//     scanf("%d", &num);
//     sum+=num;

//     while(num != 0)
//     {
//         printf("정수입력(0 to quit) : ");
//         scanf("%d", &num);
//         sum+=num;
//     }

//     printf("합계 : %d", sum);
//     return 0;
// }

// 문제2
// int main(void)
// {
//     int num=0, sum=0;

//     do
//     {
//         sum+=num;
//         num+=2;
//     } while (num<=100);

//     printf("합계 : %d \n", sum);    
// }

// 문제3
int main(void)
{
    int cur=2;
    int is=0;

    do{
        is=1;
        do
        {
            printf("%dx%d=%d\n", cur, is, cur*is);
            is++;
        }while(is<10);
        cur++;
    }while(cur<10);

    return 0;
}