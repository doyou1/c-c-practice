#include <stdio.h>
void Snall(int arr[][50], int len)
{
    int one=0;  // 'arr'배열에 1씩 증가하면서 담기는 데이터 변수
    int k=0;

    // 가로1 -> 세로1 -> 가로2 -> 세로2를 한 루틴으로 데이터를 채우며 반복하는 동작
    /*
        0 < 5-2
    */
    while(k < len-2){
        // 가로1
        for(int i=k;i<len-k;i++)
        {
            printf("k : %d, i : %d one : %d \n", k,i,one+1);
            arr[k][i]=++one;
        }
        // 세로1
        for(int i=k+1;i<len-k;i++)
        {
            arr[i][(len-k)-1] = ++one;
        }
        // 가로2
        for(int i=(len-k)-2;i>=k;i--)
        {
            arr[(len-k)-1][i] = ++one;
        }
        // 세로2
        for(int i=(len-k)-2; i>k; i--)
        {
            arr[i][k] = ++one;
        }
        k++;
    }
}

int main(void)
{
    int arr[50][50] = {0};  // 달팽이 형태로 데이터를 받을 배열
    int num;    // 정사각형 한 변의 길이를 입력 받는 변수

    printf("정수 입력 : ");
    scanf("%d", &num);

    Snall(arr, num);

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}