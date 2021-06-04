#include <stdio.h>

int x;

int calculate(void);

int main(void)
{
    printf("얼마인가요?" );
    scanf("%d", &x); 
    calculate();
    printf("필요한 개수는 %d개 입니다", calculate());
    return 0;
}

int calculate(void)
{
    int sum =0;
    
    while(x>=50000)
    {
        x -= 50000;
        sum++;
    }
    while(x>=10000)
    {
        x -= 10000;
        sum++;
    }
    while(x>=5000)
    {
        x -= 5000;
        sum++;
    }
    while(x>=1000)
    {
        x -= 1000;
        sum++;
    }
    while(x>=500)
    {
        x -= 500;
        sum++;
    }
    while(x>=100)
    {
        x -= 100;
        sum++;
    }
    while(x>=50)
    {
        x -= 50;
        sum++;
    }
    while(x>=10)
    {
        x -= 10;
        sum++;
    }
    
    return sum;
}