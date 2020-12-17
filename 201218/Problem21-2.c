#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 문제1
// int main(void)
// {
//     char str[50];
//     int sum=0;
//     int diff = '1'-1;

//     printf("문자열 입력 : ");
//     scanf("%s", str);

//     for(int i=0;i<strlen(str);i++)
//     {
//         if('0'<=str[i] && str[i]<='9')
//             sum+= str[i] - diff;
//     }
//     printf("%d", sum);

//     return 0;
// }

// 문제2
// int main(void)
// {
//     char str1[20];
//     char str2[20];
//     char str3[40];

//     printf("문자열1 입력 : ");
//     fgets(str1,sizeof(str1),stdin);

//     printf("문자열2 입력 : ");
//     fgets(str2,sizeof(str2),stdin);

//     strcpy(str3, str1);
//     str3[strlen(str3)-1]=0;
//     strcat(str3,str2);
//     str3[strlen(str3)-1]=0;

//     puts(str3);

//     return 0;
// }

// 문제3 풀다가 멈춤
// int main(void)
// {
//     char str1[50];
//     char str2[50];
//     int space= ' ';
//     int index1=0, index2=0, index3, index4;
//     printf("이름 나이 입력1 : ");
//     fgets(str1,sizeof(str1),stdin);
//     printf("이름 나이 입력2 : ");
//     fgets(str2,sizeof(str2),stdin);

//     while(str1[index1++] != space);
//     while(str2[index2++] != space);

//     if(index1==index2 && strncmp(str1,str2,index1-1) == 0)
//     {
//         printf("이름이 동일합니다. \n");
//     }else{
//         printf("이름이 같지 않습니다. \n");
//     }
//     index3=index1;
//     index4=index2;
//     while(str1[index3++] != '\n');
//     while(str2[index4++] != '\n');

//     if(index3-index1 == index4 - index2)
//     {
        
//     }
//     return 0;
// }

// 문제3
int GetSpaceIdx(char str[])
{
    int len, i;
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
            return i;
    }

    return -1;  // 공백 문자가 존재하지 않는 경우의 반환
}

int CompName(char str1[], char str2[])
{
    int idx1=GetSpaceIdx(str1);
    int idx2=GetSpaceIdx(str2);

    if(idx1 != idx2)    // 이름의 길이가 다르면 서로 다른 이름!
        return 0;    
    else
    {
        return !strncmp(str1,str2,idx1);
    }
}

int CompAge(char str1[], char str2[])
{
    int idx1=GetSpaceIdx(str1);
    int idx2=GetSpaceIdx(str2);
    int ag1, ag2;

    puts(&str1[idx1+1]);

    ag1=atoi(&str1[idx1+1]);
    ag2=atoi(&str2[idx2+1]);

    if(ag1==ag2)
        return 1;
    else
        return 0;
}

int main(void)
{
    char str1[20];
    char str2[20];
    printf("첫 번째 사람 정보 입력 : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1)-1]=0;

    printf("두 번째 사람 정보 입력 : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2)-1]=0;

    if(CompName(str1, str2))
        puts("이름이 동일힙나디!");
    else
        puts("이름이 동일하지 않습니다!");

    if(CompAge(str1,str2))
        puts("나이가 같습니다!");
    else
        puts("나이가 같지 않습니다!");
    
    return 0;
}