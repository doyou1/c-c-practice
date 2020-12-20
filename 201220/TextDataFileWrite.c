#include <stdio.h>

int main(void)
{
    FILE * fp=fopen("C:\\Users\\jh\\c_practice\\201220\\simple.txt", "wt");
    if(fp==NULL)
    {
        puts("파일오픈 실패!");
        return -1;  // 비정상적 종료를 의미하기 위해서 -1을 반환
    }

    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fputs("My name is Hong \n", fp);
    fputs("Your name is Yoon \n", fp);
    fclose(fp);     

    return 0;
}