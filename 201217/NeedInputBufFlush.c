#include <stdio.h>

/*  왜 버퍼를 비워야 하나요 */
int main(void)
{
    char perID[7];
    char name[10];
    
    /*
        주민번호 앞 6자리 입력 : 941116
        이름 입력 : 주민번호 : 941116
        이름 :
    */
    fputs("주민번호 앞 6자리 입력 : ", stdout);
    // 941116\n으로 총 7문자 입력
    // , perID는 7공간이기에 맨 뒤 널문자를 제외하고 최대 6문자 읽어 들임
    // 따라서 \n을 제외한 941116만 읽히고 \n은 입력버퍼에 남게 됨
    // 그 이후 fgets이 호출되고, fgets은 \n을 만날 때까지 읽어 들이는 함수이므로,
    // 버퍼에 남아있는 \n만 읽어버리고 함수 종료
    fgets(perID, sizeof(perID), stdin);

    fputs("이름 입력 : ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("주민번호 : %s \n", perID);
    printf("이름 : %s \n", name);

    return 0;
}