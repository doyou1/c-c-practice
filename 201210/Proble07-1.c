#include <stdio.h>

// 문제1
// int main(void)
// {
//     int num;
//     int count = 0;
//     printf("정수 입력 : ");
//     scanf("%d", &num);
//     while(count < num)
//     {
//         printf("Hello world %d \n", count);
//         count++;
//     }
//     return 0;
// }

// 문제2
// int main(void)
// {
//     int num;
//     int count = 1;
//     printf("정수 입력 : ");
//     scanf("%d", &num);
//     while(count <= num)
//     {
//         printf("%d ", count * 3);
//         count++;
//     }
//     return 0;
// }

// 문제3
// int main(void)
// {
//     int num;
//     int sum=0;

//     while(num != 0)
//     {
//         scanf("%d", &num);
//         sum += num;
//     }
//     printf("합계 : %d", sum);
// }

// 문제4
// int main(void)
// {
//     int num;
//     int count=9;

//     printf("몇단? : ");
//     scanf("%d", &num);

//     while(count>0)
//     {
//         printf("%dx%d=%d \n", num, count, num*count);
//         count--;
//     }

//     return 0;
// }

// 문제5
int main(void)
{
    int num, temp, sum=0;
    int count=0;

    printf("몇개의 정수 : ");
    scanf("%d", &num);

    while(count<num)
    {
        printf("[%d] : ", count);
        scanf("%d", &temp);
        sum += temp;
        count++;
    }

    printf("평균값 %f", (double) sum/num);

    return 0;
}