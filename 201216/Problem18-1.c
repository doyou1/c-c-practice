#include <stdio.h>

// 문제1
// int main(void)
// {
//     int * arr1[5];
//     int * arr2[3][5];

//     int ** ptr1 = arr1;
//     int *(*ptr2)[5] = arr2;
//     return 0;
// }

// 문제2
// void SimpleFuncOne(int * ptr1, int * ptr2)
// { 
//     printf("ptr1 : %p \n", ptr1);
//     printf("ptr2 : %p \n", ptr2);
//     printf("\n");
// }
// void SimpleFuncTwo(int (*ptr3)[4], int (*ptr4)[4])
// {
//     printf("ptr3 : %p \n", ptr3);
//     printf("ptr4 : %p \n", ptr4);
//     printf("\n");
// }

// int main(void)
// {
//     int arr1[3];
//     int arr2[4];
    // int arr3[3][4];
    // int arr4[2][4];

//     printf("arr1 : %p \n", arr1);
//     printf("arr2 : %p \n", arr2);
//     printf("\n");
//     SimpleFuncOne(arr1, arr2);

//      printf("arr3 : %p \n", arr3);
//      printf("arr4 : %p \n", arr4);
//      printf("\n");
//      SimpleFuncTwo(arr3, arr4);
    
//      return 0;
//  }

// 문제3
// void ComplexFuncOne(int ** ptr1, int *(*ptr2)[5]){
//     printf("ptr1 : %p, ptr2 : %p \n", ptr1, ptr2);
// }
// void ComplexFuncTwo(int **(*ptr3), int ***(*ptr4)[5])
// {
//     printf("ptr3 : %p, ptr4 : %p \n", ptr3, ptr4);
// }

// int main(void)
// {
//     int* arr1[3];
//     int* arr2[3][5];
//     printf("arr1 : %p, arr2 : %p \n", arr1, arr2);
//     ComplexFuncOne(arr1, arr2);
//     printf("\n");
//     int** arr3[5];
//     int*** arr4[3][5];
//     printf("arr3 : %p, arr4 : %p \n", arr3, arr4);
//     ComplexFuncTwo(arr3, arr4);

//     return 0;
// }

// 문제4
// int main(void)
// {
//     int arr[3][2]={{1,2},{3,4},{5,6}};
//     // 3 2
//     printf("%d %d \n", arr[1][0], arr[0][1]);
//     // 6 4
//     printf("%d %d \n", *(arr[2]+1), *(arr[1]+1));
//     // 5 2
//     printf("%d %d \n", (*(arr+2))[0], (*(arr+0))[1]);
//     // 1 1
//     printf("%d %d \n", **arr, *(*(arr+0)+0));

//     return 0;
// }

// 문제5
/* arr[i] == *(arr+i)*/
int main(void)
{
    int arr[2][2][2]={1,2,3,4,5,6,7,8};
    printf("%d \n", arr[1][0][1]);
    // printf("%d \n", *(arr[1][0]+1));
    // printf("%d \n", *(*(arr+1)[0])+1);
    // printf("%d \n", *(*(*(arr+1))+0)+1);

    printf("%d \n", (*(arr+1))[0][1]);
    printf("%d \n", (*(*(arr+1)+0))[1]);
    printf("%d \n", *(*(*(arr+1)+0)+1));
    printf("%d \n", (*(arr[1]+0))[1]);
    printf("%d \n", *(arr[1][0])+1);

    return 0;
}