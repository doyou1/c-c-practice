#include <stdio.h>

int main(void)
{
    /* 파일생성 */
    FILE *fp=fopen("C:\\Users\\jh\\c_practice\\201220\\text.txt", "wt");
    fputs("123456789", fp);
    fclose(fp);

    /* 파일개방 */
    fp=fopen("C:\\Users\\jh\\c_practice\\201220\\text.txt", "rt");

    /* SEEK_END test */
    /*
        파일의 끝(EOF)에서 앞으로(파일의 시작 부분으로) 두 칸 이동을 하니
        , 파일 위치 지시자는 8을 가리킴.
    */
    fseek(fp,-2,SEEK_END);
    putchar(fgetc(fp));// 8 출력

    /* SEEK_SET test */
    /*
        파일의 첫번째 데이터인 1에서부터 두 칸 뒤로 이동 하니
        , 파일 위치 지시자는 3을 가리킴
        3을 출력하면서 파일 위치 지시자는 4를 가리킴
    */
    fseek(fp,2,SEEK_SET);
    putchar(fgetc(fp));

    /* SEEK_CUR test */
    /*
        현재 파일 위치 지시자는 4를 가리키는데, 현 위치에서 뒤로 두 칸을 이동시키니
        , 파일 위치 지시자는 6을 가리킴
    */
    fseek(fp,2,SEEK_CUR);
    putchar(fgetc(fp)); // 6 출력

    fclose(fp);
    return 0;
}