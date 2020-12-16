#include <stdio.h>
#include <stdlib.h>

/*  도전3의 난수는 규칙적이다! 그래서 의사난수라고 한다.    
    srand함수로 씨드값을 전달해 난수의 형태를 변화시킴*/
int main(void)
{
    int seed, i;
    printf("씨드 값 입력 : ");
    scanf("%d", &seed);
    srand(seed);        // 씨앗 심기!

    for(i=0;i<5;i++)
        printf("정수 출력 : %d \n", rand());    // 열매 수확!

    return 0;
}