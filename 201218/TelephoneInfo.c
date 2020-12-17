#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    char phoneNum[20];
    int age;    
};
/* 정의와 동시에 변수 선언도 가능*/
// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;    
// } man1, man2, man3;

int main(void)
{
    struct person man1, man2;
    strcpy(man1.name, "안성준");
    strcpy(man1.phoneNum, "010-1122-3344");
    man1.age=23;

    printf("이름 입력 : "); scanf("%s", man2.name);
    printf("번호 입력 : "); scanf("%s", man2.phoneNum);
    printf("나이 입력 : "); scanf("%d", &man2.age);

    printf("이름 : %s \n", man1.name);
    printf("번호 : %s \n", man1.phoneNum);
    printf("나이 : %d \n", man1.age);

    printf("이름 : %s \n", man2.name);
    printf("번호 : %s \n", man2.phoneNum);
    printf("나이 : %d \n", man2.age);

    return 0;
}