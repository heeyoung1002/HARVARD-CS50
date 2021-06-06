//다섯개의 정수 중에서 최댓값과 최댓값의 위치를 출력하느 
//다섯개의 정수 중 짝수 최댓값과 홀수 최댓값

#include <stdio.h>

int main(void)
{
    int i, oddmax, evenmax;
    evenmax = 0;
    oddmax = 0;
    
    int n[5] = { 13, 40, 20, 58, 18 };
    for(i=0; i<5; i++)
    {
        if(n[i] % 2 == 0)
        {
            if(evenmax<n[i])
            {
                evenmax = n[i];
            }
        }
        else
        {
            if(oddmax<n[i])
            {
                oddmax = n[i];
            }
        }
    }
    printf(" %d %d", evenmax, oddmax);
    
    return 0;
}