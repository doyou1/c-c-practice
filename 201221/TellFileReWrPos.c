#include <stdio.h>

/* 현재 파일 위치 지시자의 위치 : ftell */
int main(void)
{
    long fpos;
    int i;

    /* 파일생성 */
    FILE *fp=fopen("C:\\Users\\jh\\c_practice\\201221\\text.txt", "wt");
    fputs("1234-", fp);
    fclose(fp);

    /* 파일개방 */
    fp=fopen("C:\\Users\\jh\\c_practice\\201221\\text.txt", "rt");
    
    for(i=0;i<4;i++)
    {
        putchar(fgetc(fp));
        fpos=ftell(fp);
        fseek(fp,-1,SEEK_END);
        putchar(fgetc(fp));
        fseek(fp,fpos,SEEK_SET);
    }
    fclose(fp);
    return 0;
}