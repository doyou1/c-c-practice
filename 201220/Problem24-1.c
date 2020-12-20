#include <stdio.h>

// 문제1
// int main(void)
// {
//     FILE *fp=fopen("C:\\Users\\jh\\c_practice\\201220\\mystory.txt","wt");
//     fputs("#이름 : 심재형 \n",fp);
//     fputs("#주민번호 : 941116-1111111 \n",fp);
//     fputs("#전화번호 : 010-1111-2222 \n",fp);
//     fclose(fp);
// }

// 문제2
// int main(void)
// {
//     FILE *fp=fopen("C:\\Users\\jh\\c_practice\\201220\\mystory.txt","at");
//     fputs("#즐겨먹는 음식 : 짬뽕, 탕수육 \n",fp);
//     fputs("#취미 : 축구 \n",fp);
//     fclose(fp);
// }

// 문제3
int main(void)
{
    FILE *fp=fopen("C:\\Users\\jh\\c_practice\\201220\\mystory.txt","rt");
    char str[100];

    while(fgets(str,sizeof(str),fp)!=NULL)
        printf(str);
    fclose(fp);
    return 0;
}