#include <stdio.h>

//두개의 속성을 가지고 있다
struct point
{
    int x;
    int y;
};

void comparepoint (struct point p1, struct point p2);

int main(void)
{
    struct point 
    struct point p2;
    
    p1.x = 30;
    p1.y = 10;
    
    p2.x = 30;
    p2.y = 10;
    
    comparepoint(p1,p2);
    
    return 0;
}

void comparepoint (struct point p1, struct point p2)
{
    if((p1.x == p2.x) && (p1.y == p2.y))
    {
        printf("same");
    }
}