#include <stdio.h>

int main(void)
{
    char name[10];
    char sex;
    int age;

    FILE * fp=fopen("C:\\Users\\jh\\c_practice\\201220\\friend.txt","rt");
    int ret;
    if(fp==NULL)
    {
        puts("파일 생성 실패!");
        return -1;
    }
    else{
        puts("파일 생성은 성공!");
    }
    while(1)
    {
        ret=fscanf(fp, "%s %c %d",name,&sex,&age);
        if(ret==EOF)
        {
            break;
        }
        printf("%s %c %d \n", name, sex, age);
    }
    fclose(fp);
    return 0;
}