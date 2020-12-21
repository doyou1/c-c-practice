#include <stdio.h>
#define ADD(X,Y,Z) ((X)+(Y)+(Z))
#define MUL(X,Y,Z) ((X)*(Y)*(Z))
#define FI 3.14
#define AREA(X) ((X)*(X)*(FI))
#define MAX(X,Y) ((X)>(Y) ? (X):(Y))

// 문제1
// int main(void)
// {
//     int n1,n2,n3;

//     printf("3개의 정수 입력 : ");
//     scanf("%d %d %d", &n1,&n2,&n3);

//     printf("3개의 정수 덧셈 : %d \n", ADD(n1,n2,n3));
//     printf("3개의 정수 곱셈 : %d \n", MUL(n1,n2,n3));

//     return 0;
// }

// 문제2
// int main(void)
// {
//     double rad=3.0;
//     printf("반지름 3.0인 원의 넓이 : %g \n", AREA(rad));

//     return 0;
// }

// 문제3
int main(void)
{
    int n1=3,n2=5;

    printf("%d와 %d 중 더 큰 수는 %d \n", n1,n2,MAX(n1,n2));

    return 0;
}