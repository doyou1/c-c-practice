#include <stdio.h>

// 문제1
/*
    총 5개의 정수를 입력받아서, 그 수의 합을 출력하는 프로그램을 작성해보자!
    정수는 반드시 1이상이어야한다! while문 중첩을 통해 해결해보자!
*/
// int main(void)
// {
//     int count=0;
//     int sum=0;
//     int temp=0;
    
//     while(count < 5)
//     {
//         while(temp < 1)
//         {
//             printf("1이상의 정수입력(%d번째) : ", count+1);
//             scanf("%d", &temp);
//         }
//         sum+=temp;
//         temp=0;
//         count++;
//     }

//     printf("총합 : %d", sum);

//     return 0;
// }

// 문제2
int main(void)
{
    int i=0;
    int j=0;

    while(i<5)
    {
        while(i>j)
        {
            printf("0");
            j++;
        }
        printf("*\n");
        j=0;
        i++;
    }
}