#include <stdio.h>
int Add(int val);
int num=1;
/*
    전역변수와 동이한 이름의 지역번수가 선언되면?
    - 해당 지역 내에서는 지역변수가 가리워지고, 지역변수의 접근이 이뤄짐!!
*/
int main(void)
{
    int num=5;
    printf("num : %d \n", Add(3));
    printf("num : %d \n", num+9);
    return 0;
}

int Add(int val)
{
    int num=9;
    num += val;
    return num;
}