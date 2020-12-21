#include <stdio.h>
#include <conio.h>

int main(void)
{
    int key;
    int i;

    while(1)
    {
        if(kbhit())
        {
            key=getch();
            printf("%d \n", key);
        }
    }

    return 0;
}