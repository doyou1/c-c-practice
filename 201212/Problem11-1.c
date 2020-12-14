#include <stdio.h>

//문제 1
// int main(void)
// {
//     int arr [5], i, num, max=0, min=0, sum=0;
//     int arrLen = sizeof(arr)/sizeof(int);

//     for(i=0;i<arrLen;i++)
//     {
//         printf("%d번째 정수 입력 : ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     max = arr[0];
//     min = arr[0];
//     for(i=0;i<arrLen;i++)
//     {
//         max = max<arr[i] ? arr[i] : max;
//         min = min>arr[i] ? arr[i] : min;
//         sum += arr[i];
//     }

//     printf("최댓값 : %d \n", max);
//     printf("최솟값 : %d \n", min);
//     printf("총합 : %d \n", sum);

//     return 0;
// }

// 문제2
int main(void)
{
    char arr [9] = {'G','o','o','d',' ','t','i','m','e'};
    int arrLen = sizeof(arr) / sizeof(char), i;

    for(i=0;i<arrLen;i++)
        printf("%c", arr[i]);
    
    return 0;
}