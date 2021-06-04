#include <stdio.h>

// 정수 갯수를 입력해서 그것의 합을 구하는 것 
int main(void)
{
    int i, n, x, sum;
    sum=0;
    
    printf("정수의 갯수를 입력하세요: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        printf("정수의 값은? ");
        scanf("%d", &x);
        sum +=x;
    }
    
    printf("합은 %d 입니다", sum);
    
    return 0;
}