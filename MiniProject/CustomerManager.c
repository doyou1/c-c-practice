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

int listlen=100, count=0;

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
    int num;
    Person * list[listlen];
    
    while(1)
    {
        num = Menu();
        getchar();
        switch (num)
        {
        // 회원가입
        case 1:
            Join(&list);
            break;
        // 회원전체조회
        case 2:
            List(&list);
            break;
        // 회원조회
        case 3:
            Search(&list);
            break;
        // 회원정보수정
        case 4:
            Update(&list);
            break;
        // 회원정보삭제
        case 5:
            Delete(&list);
            break;
        // 프로그램 종료
        case 0:
            printf("==프로그램을 종료합니다==\n");
            return 0;
        default:
            printf("입력을 확인해주세요!\n");
            break;
        }
    }

    return 0;
}

/* 회원 가입 */
void Join(Person * list[])
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

    if(count+1==listlen)
    {
        list = realloc(list, sizeof(Person)*listlen*2);
        listlen *= 2;  
    }
    *list[count++] = man;

}

/* 회원 전체 조회*/
void List(Person * list[])
{
    printf("=======================\n");
    for(int i=0;i<count;i++)
    {
        Person man = *list[i];
        printf("==번호 : %d \n", i);
        printf("==이름 : %s \n", man.name);
        printf("==성별 : %c \n", man.sex);
        printf("==나이 : %d \n", man.age);
        printf("==몸무게 : %lf \n", man.weight);
        printf("==키 : %lf \n", man.height);
        printf("=======================\n");    
    }
}

/* 회원 조회 */
void Search(Person *list[])
{
    int num;
    printf("=======================\n");
    printf("==번호 입력 : ");
    scanf("%d", &num);
    Person man = *list[num];
    printf("==번호 : %d \n", num);
    printf("==이름 : %s \n", man.name);
    printf("==성별 : %c \n", man.sex);
    printf("==나이 : %d \n", man.age);
    printf("==몸무게 : %lf \n", man.weight);
    printf("==키 : %lf \n", man.height);
    printf("=======================\n");

}

/* 회원 정보 수정 */
void Update(Person * list[])
{
    int num;
    printf("=======================\n");
    printf("==번호 입력 : ");
    scanf("%d", &num);

    Person man = *list[num];
    printf("==번호 : %d \n", num);
    printf("==이름 : %s -> ", man.name);
    scanf("%s", man.name);
    getchar();
    printf("==성별 : %c -> ", man.sex);
    scanf("%c", &man.sex);
    getchar();
    printf("==나이 : %d -> ", man.age);
    scanf("%d", &man.age);
    getchar();
    printf("==몸무게 : %g -> ", man.weight);
    scanf("%lf", &man.weight);
    getchar();
    printf("==키 : %g -> ", man.height);
    scanf("%lf", &man.height);
    getchar();
    printf("=======================\n");

    *list[num] = man;
}

/* 회원 정보 삭제 */
void Delete(Person * list[])
{
    int num;
    char check;
    printf("=======================\n");
    printf("==번호 입력 : ");
    scanf("%d", &num);
    getchar();
    Person man = *list[num];
    printf("==번호 : %d \n", num);
    printf("==이름 : %s \n", man.name);
    printf("==성별 : %c \n", man.sex);
    printf("==나이 : %d \n", man.age);
    printf("==몸무게 : %lf \n", man.weight);
    printf("==키 : %lf \n", man.height);
    printf("=======================\n");

    printf("==정말 삭제하시겠습니까?(Y/N) : ");
    scanf("%c", &check);

    // 삭제
    if(check=='Y' || check=='y')
    {
        for(int i=num;i<count;i++)
        {
            //삭제후 INDEX SHIFT
        }   
        printf("==삭제를 완료했습니다==\n");
    }
    // 삭제안함
    else if(check=='N' || check=='n')
    {
        printf("==삭제를 취소합니다==\n");
        return;
    }
}