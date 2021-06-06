#include <stdio.h>

int main(void)
{
    int x,y;
    char i;
    printf("숫자 문자 숫자를 입력하세요: ");
    scanf("%d %c %d", &x, &i, &y);
    
    if( i == '+')
    {
        printf("%d %c %d = %d", x, i, y, x+y);
    }
    else if( i == '-')
    {
        printf("%d %c %d = %d", x, i, y, x-y);
    }
    else if (i == '*')
    {
        printf("%d %c %d = %d", x, i, y, x*y);
    }
    else 
    {
        printf("%d %c %d = %d", x, i, y, x/y);
    }
}