#include <stdio.h>

int main(void)
{
    FILE * src=fopen("C:\\Users\\jh\\c_practice\\201220\\src.txt", "rt");
    FILE * des=fopen("C:\\Users\\jh\\c_practice\\201220\\dst.txt", "wt");
    int ch;
    if(src==NULL || des==NULL)
    {
        puts("파일 오픈 실패 !");
        return -1;
    }

    while((ch=fgetc(src))!=EOF)
        fputc(ch, des);
    
    if(feof(src)!=0)
        puts("파일복사 완료!");
    else
        puts("파일복사 실패!");

    fclose(src);
    fclose(des);
    return 0;
}