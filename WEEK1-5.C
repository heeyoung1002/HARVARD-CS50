#include <stdio.h>
//1월 1일부터 현재의 날짜까지의 차이를 알아보는 프로그램
int daysgap(int month, int day);

int main(void)
{
    int month;
    int day;
    printf("Write down the month: ");
    scanf("%d", &month);
    printf("Write down the day: ");
    scanf("%d", &day);
    printf("The day gap between the current day is %d", daysgap(month, day));
    return 0;
}

int daysgap(int month, int day)
{
    int i, sum =0;
    for(i=1; i<month; i++)
    {
        if(i==2)
        {
            sum +=28;
        }
        else if(i==4 || i==6 || i==9 || i==11)
        {
            sum +=30;
        }
        else
        {
            sum +=31;
        }
    }
    return sum + day;
}