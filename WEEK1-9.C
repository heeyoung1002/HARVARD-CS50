#include <stdio.h>

int main(void)
{
    int i, n;
    
    printf("몇 단인지 입력하세요: ");
    scanf("%d", &n);
    
    printf("[ %d단 ]\n\n", n);
    
    for(i=1; i<=9; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}