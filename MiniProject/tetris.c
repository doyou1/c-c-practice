#define _CRT_OBSOLETE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>      // _sleep 함수가 선언된 헤더 파일
#include <string.h>
#include <time.h>

#define WIDTH 24
#define HEIGHT 20

void drawBoard(){
    for(int i=0;i<WIDTH+1;i++){
        if(i==0) {
            printf("┏");
        }else if(i==WIDTH) {
            printf("┓");
        }else{
            printf("━");    
        }
    }
    printf("\n");
    for(int i=0;i<HEIGHT+1;i++) {
            printf("┃\t\t\t┃\n");        
    }
    for(int i=0;i<WIDTH+1;i++){
        if(i==0) {
            printf("┗");
        }else if(i==WIDTH) {
            printf("┛");
        }else{
            printf("━");    
        }
    } 
    printf("\n");
}

int XY[WIDTH-2][HEIGHT-2] = {0,};

int blocks[4][2] = {
        {0,0},
        {0,1},
        {1,1},
        {1,2}
};

int main() {

    

    system("clr");
    printf("\n");
    int nowX=0, nowY = 0;
    while(1) {
        drawBoard(nowX, nowY++);
        Sleep(1000);
    }
    printf("\n");

    

    return 0;
}

int checkValue(int i, int j) {
    
    for(int x=0;x<4;x++) {
         if(arr2[x][0] == i && arr2[x][1]==j) return 1;
    }
    return 0;
}
void MySleep(int a_second)
{
    clock_t start_clk = clock();

    a_second--;
    while(1) {
        // 지속적으로 clock 함수를 호출하여 흘러간 시간 계산
        if((clock() - start_clk) / CLOCKS_PER_SEC > a_second) break;
    }
}

