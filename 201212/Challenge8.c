#include <stdio.h>

int RecursiveFunc(int n, int sum)
{
    if(n==0)
        return sum;
    return RecursiveFunc(n-1, sum*2);
}

int main(void)
{
    int n;
    
    printf("정수 입력 : ");
    scanf("%d", &n);

    int sum = RecursiveFunc(n, 1);

    printf("2의 %d승은 %d", n, sum);
}