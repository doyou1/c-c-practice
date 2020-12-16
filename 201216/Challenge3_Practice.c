#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[50], i, temp, count=0, check;
    printf("난수의 범위 : 0부터 %d까지 \n\n", RAND_MAX);

    while(count < 50)
    {
        check=1;
        temp = rand()%100;

        for(int i=0;i<count;i++)
        {
            if(arr[i]==temp)
            {
                printf("같은 난수 발생 i : %d, arr[i] : %d, temp : %d \n", i, arr[i], temp);
                check=0;
                break;
            }    
        }
        if(check)
        {
            arr[count++] = temp;
        }
    }

    printf("\n");
    
    for(int i=0;i<count;i++)
    {
        printf("%5d \n", arr[i]);
    }
    printf("\n");

    return 0;
}