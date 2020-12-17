#include <stdio.h>

struct employee{
    char name[50];
    char perID[50];
    int salary;
};

int main(void)
{
    struct employee emp1, emp2;

    printf("종업원1 이름 : "); scanf("%s", emp1.name);
    printf("종업원1 주민번호 앞6자리 : "); scanf("%s", emp1.perID);
    printf("종업원1 급여 : "); scanf("%d", &emp1.salary);

    printf("종업원2 이름 : "); scanf("%s", emp2.name);
    printf("종업원2 주민번호 앞6자리 : "); scanf("%s", emp2.perID);
    printf("종업원2 급여 : "); scanf("%d", &emp2.salary);

    printf("종업원1 이름 : %s \n", emp1.name);
    printf("종업원1 주민번호 : %s \n", emp1.perID);
    printf("종업원1 급여 : %d \n", emp1.salary);

    printf("종업원2 이름 : %s \n", emp2.name);
    printf("종업원2 주민번호 : %s \n", emp2.perID);
    printf("종업원2 급여 : %d \n", emp2.salary);

    return 0;
}