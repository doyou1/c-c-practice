#include <stdio.h>

typedef struct sbox // 구조체 sbox의 정의
{
    int mem1;
    int mem2;
    double mem3;
} SBox;

typedef struct ubox // 공용체 ubox의 정의
{
    int mem1;
    int mem2;
    double mem3;
} UBox;

/*  공용체 : union  */
int main(void)
{
    SBox sbx;
    UBox ubx;
    
    // 000000000061FE10 000000000061FE14 000000000061FE18   
    // 000000000061FE00 000000000061FE04 000000000061FE08   
    // 16 16
    printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
    printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
    printf("%d %d \n", sizeof(SBox), sizeof(UBox));


    return 0;
}