#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*  야구게임    */
int main(void)
{
    printf("Start Game! \n");
    int now = (int)time(NULL);
    srand(now); 
    int result = rand()%900+100;
    int resultArr[3] = { 0 };
    int divedNum=1000;

    for(int i=0;i<3;i++)
    {
        resultArr[i] = result / (divedNum/10);
        result -= resultArr[i] * (divedNum/10);  
    }

    for(int i=0;i<3;i++)
    {
        printf("%d \n", resultArr[i]);  
    }

    printf("백도어 : %d \n", result);

    int check=1,count=0;
    int tempArr[3]={ 0 };
    int SBArr[2]={ 0 };
    while(check)
    {
        printf("3개의 숫자 선택 : ");
        scanf("%d %d %d", &tempArr[0], &tempArr[1], &tempArr[2]);

        check=0;
        count++;
    }
    return 0;
}