#include <stdio.h>

int main(void)
{
    int n, k=0, temp=1;
    printf("상수 n 입력 : ");
    scanf("%d", &n);

    while(1)
    {
        temp*=2;
        if(temp>n)
            break;
        k++;    
    }

    printf("공식을 만족하는 k의 최댓값은 %d", k);
}

