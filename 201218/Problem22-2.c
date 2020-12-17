#include <stdio.h>
#include <stdio.h>

struct employee{
    char name[50];
    char perID[50];
    int salary;
};

int main(void)
{
    struct employee arr[3];

    for(int i=0;i<3;i++)
    {
        printf("종업원%d 이름 : ", i+1);
        scanf("%s", arr[i].name);
        printf("종업원%d 주민번호 : ", i+1);
        scanf("%s", arr[i].perID);
        printf("종업원%d 급여 : ", i+1);
        scanf("%d", &arr[i].salary);
    }

    for(int i=0;i<3;i++)
    {
        printf("종업원%d %s, %s, %d \n", i+1,arr[i].name,arr[i].perID,arr[i].salary);
    }

    return 0;
}
