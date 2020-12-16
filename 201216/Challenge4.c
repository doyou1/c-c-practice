#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    // 계속 변하는 정수인 현재 시간 함수인 time을 seed로 전달하면서
    // 의사 난수 생성
    srand((int)time(NULL));

    for(i=0;i<6;i++)
        printf("주사위%d의 결과 : %d \n", i+1, rand()%6+1);
    
    // int i=0, now, value, prev=-1, temp, check=0;
    // while(i<5)
    // {
    //     now=(int)time(NULL);
    //     srand(i);
    //     temp=rand();

    //     if(check)
    //     {
    //         srand(now + temp); // 현재시간을 이용해서 씨드 설정
    //     }else{
    //         srand(now - temp);
    //     }
    //     value=rand()%6;
        
    //     printf("현재시간 : %d \n", now);
    //     printf("주사위 %d의 결과 : %d\n", i+1, value+1);

    //     i++;

    //     check = !check;
    // }

    return 0;
}