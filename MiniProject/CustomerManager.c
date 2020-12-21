#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    char name[100];    // 이름
    char sex;   // 성별
    int age;    // 나이
    double weight; // 몸무게
    double height; // 키
} Person;

int listlen=100;

int Menu(void)
{
    int n;


    printf(""
        "=======================\n"
        "==재형헬스장 회원정보==\n"
        "==1.회 원 가 입========\n"
        "==2.회 원 전 체 조 회==\n"
        "==3.회 원 조 회========\n"
        "==4.회 원 정 보 수 정==\n"
        "==5.회 원 정 보 삭 제==\n"
        "==0.종료===============\n"
        "==입력 > "
    "");
    scanf("%d", &n);

    return n;
}

int main(void)
{
    int num, count=0;
    Person * list = malloc(sizeof(Person)*listlen);
    
    while(1)
    {
        num = Menu();
        getchar();
        switch (num)
        {
        // 회원가입
        case 1:
            Join(list,&count);
            break;
        // 회원전체조회
        case 2:
            List(list,&count);
            break;
        // 회원조회
        case 3:
            Search();
            break;
        // 회원정보수정
        case 4:
            Update();
            break;
        // 회원정보삭제
        case 5:
            Delete();
            break;
        // 프로그램 종료
        case 0:
            printf("==프로그램을 종료합니다==\n");
            free(list);
            return 0;
        default:
            printf("입력을 확인해주세요!\n");
            break;
        }
    }

    return 0;
}

/* 회원 가입 */
void Join(Person * list[], int * count)
{
    Person man;

    printf(""
    "=======================\n"
    "======회 원 가 입======\n"
    "");
    printf("==이름 : ");
    scanf("%s", man.name);
    getchar();
    printf("==성별(M/F) : ");
    scanf("%c", &man.sex);
    getchar();
    printf("==나이 : ");
    scanf("%d", &man.age);
    getchar();
    printf("==몸무게 : ");
    scanf("%lf", &man.weight);
    getchar();
    printf("==키 : ");
    scanf("%lf", &man.height);
    getchar();

    printf("%s %c %d %lf %lf \n"
    , man.name,man.sex,man.age,man.weight,man.height);

    if(*count+1==listlen)
    {
        list = realloc(list, sizeof(Person)*listlen*2);
        listlen *= 2;  
    }
    list[*count++] = &man;

}

/* 회원 전체 조회*/
void List(Person * list, int count)
{
    for(int i=0;i<count;i++)
    {
        puts(list[i].name);
    }
}

/* 회원 조회 */
void Search()
{
    printf("회원조회\n");
}

/* 회원 정보 수정 */
void Update()
{
    printf("회원정보수정\n");
}

/* 회원 정보 삭제 */
void Delete()
{
    printf("회원정보삭제\n");
}