#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*  Strike 카운트 함수  */
int checkStrike(int result[], int temp[], int len)
{
    int strike=0;
    for(int i=0;i<len;i++)
    {
        if(result[i]==temp[i])
            strike++;
    }

    return strike;
}

/*  Ball 카운트 함수  */
int checkBall(int result[], int temp[], int len)
{
    int ball=0;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(i==j)
                continue;
            else
            {
                if(result[i]==temp[j])
                    ball++;
            }
        }
    }

    return ball;
}

/*  야구게임    */
int main(void)
{
    printf("Start Game! \n");
    int count=0,temp,check;
    int resultArr[3]={0};
    while(count<3)
    {    
        int now = (int)time(NULL);
        srand(now); 
        temp = rand()%9+1;
        check=1;
        for(int i=0;i<count;i++)
        {
            if(resultArr[i]==temp)
                check = 0;
        }
        if(check)
        {
            resultArr[count]=temp;
            count++;
        }
    }

    printf("%d %d %d\n", resultArr[0], resultArr[1], resultArr[2]);
    int tempArr[3]={ 0 };
    int SBArr[2]={ 0 };
    count=0,check=1;
    int strike, ball;
    while(check)
    {
        printf("3개의 숫자 선택 : ");
        scanf("%d %d %d", &tempArr[0], &tempArr[1], &tempArr[2]);

        /*  Strike 판별 */
        strike=checkStrike(resultArr,tempArr,3);
        ball=checkBall(resultArr,tempArr,3);
        
        printf("%d번째 도전 결과 : %dstrike, %dball!\n", count+1,strike,ball);
        if(strike==3 && ball == 0)
            check=0;   
    }

    printf("\nGame Over\n");
    
    return 0;
}