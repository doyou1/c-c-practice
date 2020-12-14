#include <stdio.h>

// 문제1
// int main(void)
// {
//     int arr[5]={1,2,3,4,5};
//     int * ptr=arr;
//     int i;
//     for(i=0;i<5;i++)
//     {
//         *ptr += 2;
//         ptr++;
//     }

//     for(i=0;i<5;i++)
//         printf("%d ", arr[i]);

//     return 0;
// }

// 문제2
// int main(void)
// {
//     int arr[5]={1,2,3,4,5};
//     int * ptr=arr;
//     int i;
//     for(i=0;i<5;i++)
//         *(ptr+i)+=2;
    
//     for(i=0;i<5;i++)
//         printf("%d ", arr[i]);

//     return 0;
// }

// 문제3
// int main(void)
// {
//     int arr[5]={1,2,3,4,5};
//     int * ptr = &arr[4];
//     int i, sum=0;

//     for(i=0;i<5;i++)
//         sum += *(ptr-i);

//     printf("총합 : %d \n", sum);
// }

// 문제4
