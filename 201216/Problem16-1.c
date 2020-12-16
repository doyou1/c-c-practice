#include <stdio.h>

// 문제1
// int main(void)
// {
//     int arr[9][3];
//     int i,j;

//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<9;j++)
//             arr[i][j] =(i+2)*(j+1);
//     }

//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<9;j++)
//             printf("%d ", arr[i][j]);
//         printf("\n");
//     }

//     return 0;
// }

// 문제2
// int main(void)
// {
//     int arr1[2][4] = {
//         1,2,3,4,5,6,7,8
//     };
//     int arr2[4][2];
//     int i,j;

//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<4;j++)
//             arr2[j][i] = arr1[i][j];
//     }

//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<2;j++)
//             printf("%d ", arr2[i][j]);
//         printf("\n");
//     }

//     return 0;
// }

// 문제3
int main(void)
{
    int scores[5][5];
    char * names[5] = {"철희","철수","영희","영수","과목별 총점"};
    char * objects[4] = {"국어","영어","수학","국사"};

    int i,j,sum;

    for(i=0;i<4;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            printf("%s의 %s 점수 : ", names[i], objects[j]);
            scanf("%d",&scores[i][j]);
            sum+=scores[i][j];
        }
        printf("\n");
        // 개인별 총점
        scores[i][4] = sum;
    }

    for(i=0;i<4;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            sum+=scores[j][i];
        }
        // 과목별 총점
        scores[4][i] = sum;
    }

    printf("     국어 영어 수학 국사 \n");

    for(i=0;i<5;i++)
    {
        printf("%s ", names[i]);
        for(j=0;j<4;j++)
        {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}