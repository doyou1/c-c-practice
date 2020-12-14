#include <stdio.h>

int main(void)
{
    //크림빵(500), 새우깡(700), 콜라(400)
    int i,j,k;
    int money;

    printf("현재 당신이 소유하고 있는 금액 : ");
    scanf("%d", &money);

    for(i=1;i<=money/500;i++)
    {
        for(j=1;j<=money/700;j++)
        {
            for(k=1;k<=money/400;k++)
            {
                if(money == 500*i + 700*j + 400*k)
                    printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", i, j ,k);
            }
        }
    }

    return 0;
}