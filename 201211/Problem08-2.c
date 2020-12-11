#include <stdio.h>

// 문제1
// int main(void)
// {
//     int cur=2, is;

//     for(cur=2; cur<10; cur++)
//     {
//         if(cur%2==0){
//             for(is=1; is<10;is++)
//             {
//                 printf("%dx%d=%d \n", cur, is, cur*is);
//                 if(cur==is)
//                     break;
//             }
//             printf("\n");
//         }
//         else
//             continue;
//     }

//     return 0;
// }

// 문제2
int main(void)
{
    int a, z, temp;

    for(a=0;a<10;a++)
    {
        for(z=0;z<10;z++)
        {
            temp = ((10+1)*a) + ((10+1)*z);
            if(temp == 99)
            {
                printf("    %d %d\n", a, z);
                printf("+   %d %d\n", z, a);
                printf("---------\n");
                printf("    9 9\n\n");
            }
        }
    }

    return 0;
}