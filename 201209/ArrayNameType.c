#include <stdio.h>

/*
    배열의 이름은 포인터. 단, 그 값을 바꿀수 없는 '상수 형태의 포인터'이다.
*/
int main(void)
{
    int arr[3]={0,1,2};
    printf("배열의 이름: %p \n", arr);
    printf("첫 번째 요소: %p \n", &arr[0]);  
    printf("두 번째 요소: %p \n", &arr[1]);  
    printf("세 번째 요소: %p \n", &arr[2]);

    // arr 10= &arr[i];       //이 문장은 컴파일 에러
    return 0;  
}

/*
    - int형 배열요소간 주소 값의 차는 4바이트이다
    - 우리가 선언한 배열이 int형 배열이므로 각 요소별로 할당되는 메모리 공간의 크기는 4바이트이다.
    - 
*/