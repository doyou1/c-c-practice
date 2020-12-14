#include <stdio.h>

/*
    - int형 포인터를 대상으로 1을 증가시키면 4가 증가하고
    double형 포인터를 대상으로 1을 증가시키면 8이 증가함

    - int형 포인터를 대상으로 n 증감소 (n * sizeof(int)의 크기만큼 증감소)
    - double형 포인터를 대상으로 n 증감소 (n * sizeof(double)의 크기만큼 증감소)
*/
int main(void)
{
    int * ptr1=0x0010;
    double * ptr2=0x0010;

    printf("%p %p \n", ptr1+1, ptr1+2); // 4가 증가하고 8이 증가한다.
    printf("%p %p \n", ptr2+1, ptr2+2); // 8이 증가하고 16이 증가한다.

    printf("%p %p \n", ptr1, ptr2);
    ptr1++;     // 4가 증가한다.
    ptr2++;     // 8가 증가한다.
    printf("%p %p \n", ptr1, ptr2);    

    return 0;
}