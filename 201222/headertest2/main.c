#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

int main(void)
{
    printf("삼각형 넓이(밑변4,높이2 : %g \n",
        TriangleArea(4,2));
    printf("원 넓이(반지름 3) : %g \n",
        CircleArea(3));
    
    printf("직사각형 둘레(밑변2.5,높이5.2) : %g \n",
        RectangleRound(2.5,5.2));
    printf("정사각형 둘레(변의길이3) : %g \n",
        SquareRound(3));
    return 0;
}