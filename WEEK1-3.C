#include <stdio.h>

int difference(int month);

int main(void)
{
    int month, day;
    
    printf("현재 월과 일을 적으세요: ");
    scanf("%d %d", &month, &day);
    difference(month);
    printf("차이는 %d일 입니다", difference(month)+day);
    return 0;
}

int difference(int month)
{
    int i, days;
    days = 0;
    
    for(i=1; i<month; i++)
    {
        if(i == 1 || i == 3 ||  i == 5 || i == 7 || i == 8 || i ==10 || i == 12)
        {
            days += 31;
        }
        else if (i == 2)
        {
            days += 28;
        }
        else
        {
            days += 30;
        }
    }
    return days;
}