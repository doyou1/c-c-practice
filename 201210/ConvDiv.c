#include <stdio.h>

int main(void)
{
    int num1=3, num2=4;
    double divResult;
    
    divResult = num1 / num2;
    // 0.000000
    printf("나눗셈 결과 : %f \n", divResult);

    divResult = (double) num1 / num2;
    // 0.750000
    printf("나눗셈 결과 : %f \n", divResult);
    
    return 0;
}