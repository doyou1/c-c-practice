#include <stdio.h>
#include <stdlib.h>

/*
    힙 영역의 메모리 공간 할당과 해제 : malloc, free
    void * malloc(size_t size); // 힙 영역으로의 메모리 공간 할당
    void free(void * ptr);      // 힙 영역에 할당된 메모리 공간 해제

    - malloc 함수는 성공 시 할당된 메모리의 주소 값, 실패 시 NULL 반환
*/
int main(void)
{
    int * ptr1 = (int *) malloc(sizeof(int));
    int * ptr2 = (int *) malloc(sizeof(int)*7);
    int i;

    *ptr1=20;
    for(i=0;i<7;i++)
        ptr2[i]=i+1;
    
    printf("%d \n", *ptr1);

    for(i=0;i<7;i++)
        printf("%d ", ptr2[i]);

    free(ptr1);
    free(ptr2);

    return 0;
}