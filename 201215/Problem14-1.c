#include <stdio.h>

// 문제1
// int SquareByValue(int num)
// {
//     return num * num;
// }

// void SquareByReference(int * num)
// {
//     * num = *num * *num;
// }

// int main(void)
// {
//     int num = 5;
//     int result;

//     result = SquareByValue(num);
//     printf("num result : %d %d \n", num, result);

//     SquareByReference(&num);
//     printf("num result : %d %d \n", num, result);

//     return 0;
// }

// 문제2
void Swap3(int * num1, int * num2, int * num3)
{
    int temp = *num3;
    *num3=*num2;
    *num2=*num1;
    *num1=temp;
}

int main(void)
{
    int num1=1,num2=2,num3=3;

    printf("num1 num2 num3 : %d %d %d \n", num1,num2,num3);
    Swap3(&num1, &num2, &num3);
    printf("num1 num2 num3 : %d %d %d \n", num1,num2,num3);
    
    return 0;
}