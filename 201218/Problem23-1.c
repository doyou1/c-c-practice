typedef struct point
{
    int xpos;
    int ypos;
} Point;

void SwapPoint(Point *p1, Point *p2)
{
    Point * temp;
    *temp=*p1;
    *p1=*p2;
    *p2=*temp;
}

void ShowPoints(Point *p1, Point *p2)
{
    printf("[%d, %d] \n", p1->xpos, p1->ypos);
    printf("[%d, %d] \n", p2->xpos, p2->ypos);
    printf("\n");
}

int main(void)
{
    Point pos1={2,4};
    Point pos2={5,7};

    ShowPoints(&pos1,&pos2);
    SwapPoint(&pos1,&pos2);
    ShowPoints(&pos1,&pos2);

    return 0;
}