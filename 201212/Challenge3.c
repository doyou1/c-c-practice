#include <stdio.h>

int main(void)
{
    int num1, num2, count=1,result=1;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    while(count<=num1 && count<=num2)
    {
        if(num1%count==0 && num2%count==0)
        {
            result = count;
        }
        count++;
    }
    printf("두 수의 최대공약수 : %d", result);
    return 0;
}