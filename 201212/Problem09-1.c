#include <stdio.h>

// 문제1
// int MaxNum(int n1, int n2, int n3)
// {
//     if(n1>n2)
//         return (n1>n3) ? n1 : n3;
//     else
//         return (n2>n3) ? n2 : n3;
// }

// int MinNum(int n1, int n2, int n3)
// {
//     if(n1<n2)
//         return (n1<n3) ? n1 : n3;
//     else
//         return (n2<n3) ? n2 : n3;
// }

// int main(void)
// {
//     printf("가장 큰 수 : %d \n", MaxNum(3,2,7));
//     printf("가장 작은 수 : %d \n", MinNum(3,2,7));

//     return 0;
// }

// 문제2
// 섭씨 -> 화씨
// double CelToFah(double cel)
// {
//     return 1.8 * cel + 32;
// }

// 화씨 -> 섭씨
// double FahToCel(double fah)
// {
//     return (fah-32)/1.8;
// }

// int main(void)
// {
//     double cel = 36.5;
//     double fah = 100.0;
//     printf("섭씨(%f) -> 화씨(%f) \n", cel, CelToFah(cel));
//     printf("화씨(%f) -> 섭씨(%f) \n", fah, FahToCel(fah));

//     return 0;
// }

// 문제3
void ShowFiboSeries(int num)
{
    int f1=0, f2=1, f3, i;
    if(num==1)
        printf("%d ", f1);
    else
        printf("%d %d ", f1, f2);

    for(i=0; i<num-2; i++)
    {
        f3=f1+f2;
        printf("%d ", f3);
        f1=f2;
        f2=f3;
    }
}

int main(void)
{
    int length, i;
    printf("정수입력 : ");
    scanf("%d", &length);

    if(length<1)
    {
        printf("1이상의 값을 입력하세요 \n");
        return -1;
    }
    ShowFiboSeries(length);
    return 0;
}