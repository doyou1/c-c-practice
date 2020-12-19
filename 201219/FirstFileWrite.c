#include <stdio.h>

int main(void)
{
    //  "rt" : 입력용 스트림, "wt" : 출력용 스트림
    FILE * fp=fopen("C:\\Users\\jh\\c_practice\\201219\\data.txt", "wt");
    if(fp==NULL)
    {
        puts("파일오픈 실패!");
        return -1;  // 비정상적 종료를 의미하기 위해서 -1을 반환
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp);     // 스트림의 종료
    /*
        - 왜 개방되었던 파일을 닫아줘야 하나?
        > 운영체제가 할당한 자원의 반환
        > 버퍼링 되었던 데이터의 출력
    */
    return 0;
}