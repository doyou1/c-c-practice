#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int WhoWin(int user, int comp)
{
    // return 0: Win, 1: Draw, 2: Lose
    if(user==1)
    {
        if(comp==1)
            return 1;
        else if(comp==2)
            return 0;
        else if(comp==3)
            return 2;
        else
            return 2;
    }
    else if(user==2)
    {
        if(comp==1)
            return 2;
        else if(comp==2)
            return 1;
        else if(comp==3)
            return 0;
        else
            return 2;
    }
    else if(user==3)
    {
        if(comp==1)
            return 0;
        else if(comp==2)
            return 2;
        else if(comp==3)
            return 1;
        else
            return 2;
    }else{
        return 2;
    }
}

int main(void)
{
    // index 0:승, 1:무, 2:패 담는 배열
    int result[3]={ 0 };
    // WhoWin 함수를 통해 User, Computer 누구의 승인지를 담는 함수
    // 0 : User Win, 1 : Draw, 2 : Computer Win
    int check;
    // 결과 출력 문구 담는 배열
    char * resultSentences[3] = {"당신이 이겼습니다!", "비겼습니다!", "당신이 졌습니다!"};

    // User의 선택 담는 변수
    int choice;
    // User의 선택 정수에 따른 값 담는 배열
    char *choiceName[3] = {"바위","가위","보"};
    
    // Computer의 랜덤 변수
    int ran;
    
    while(result[2] < 1)
    {
        printf("바위는 1, 가위는 2, 보는 3 : ");
        scanf("%d", &choice);
        srand((int)time(NULL));

        ran = rand()%3;

        check = WhoWin(choice, ran+1);
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, %s \n", choiceName[choice-1], choiceName[ran], resultSentences[check]);
        
        result[check]+=1;
    }

    printf("\n 게임의 결과 : %d승, %d무", result[0], result[1]);

    return 0;
}