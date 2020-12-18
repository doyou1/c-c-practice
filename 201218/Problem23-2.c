typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct rectangle
{
    Point lt;   //left top 왼쪽 상단
    Point rb;   //right bottom 오른쪽 하단
} Rectangle;

int GetArea(Rectangle rec)
{
    return (rec.rb.xpos - rec.lt.xpos) * (rec.rb.ypos - rec.lt.ypos);
}

void ShowAllCoor(Rectangle rec)
{
    printf("[%d, %d], [%d, %d]\n[%d, %d], [%d, %d] \n"
    , rec.lt.xpos,rec.lt.ypos
    , rec.rb.xpos,rec.lt.ypos
    , rec.lt.xpos,rec.rb.ypos
    , rec.rb.xpos,rec.rb.ypos);
}

int main(void)
{
    Rectangle rec = {{1,1},{3,3}};
    int area;
    area = GetArea(rec);
    printf("직사각형의 넓이 : %d \n", area);
    ShowAllCoor(rec);

    return 0;
}