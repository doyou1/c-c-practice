#include <stdio.h>

/*  
    변수 num에 접근하는 방법 
    **dptr = 10.1;  // 변수 num에 10.1이 저장됨
    *ptr = 20.2;    // 변수 num에 20.2가 저장됨
    *ptr2 = 30.3;   // 변수 num에 30.3이 저장됨
    num = 40.4;     // 변수 num에 접근하는 가장 기본적인 방법
*/
int main(void)
{
    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;
    double *ptr2;

    printf("%9p %9p \n", ptr, *dptr);
    printf("%9g %9g \n", num, **dptr);
    ptr2=*dptr; // ptr2 = ptr과 같은 문장
    *ptr2 = 10.99;

    printf("%9g %9g \n", num, **dptr);

    return 0;
}