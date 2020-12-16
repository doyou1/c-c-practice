#include <stdio.h>

/*
    i   j   count
    // 가로+
    0   0   1
    0   1   2
    0   2   3
    0   3   4
    for(int i=k,i<(len-1)-k;i++)
    {
        arr[k][i] = ++count;
    }
    // 세로+
    1   3   5
    2   3   6
    3   3   7
    for(int i=k+1;i<(len-1)-k;i++)
    {
        arr[i][(len-1)-k] = ++count;
    }
    // 가로-
    3   2   8
    3   1   9
    3   0   10
    for(int i=(len-2)-k;i>=k;i--)
    {
        arr[(len-1)-k][i] = ++count;
    }
    // 세로-
    2   0   11
    1   0   12
    for(int i=(len-2)-k;i>=k+1;i--)
    {
        arr[i][k] = ++count;
    }
    
    // 가로+
    1   1   13
    1   2   14
    // 세로+
    2   2   15
    // 가로-
    2   1   16    
*/
int main(void)
{

}