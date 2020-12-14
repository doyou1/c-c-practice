#include <stdio.h>

/*
    소수 10개 찾기
*/
int main()
{
    int count=0, num=2, i;

    while(count<10)
    {
        int check = 1;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                check = 0;
                break;
            }
        }
        if(check)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}