#include <stdio.h>

int main(void)
{
    int x, i, n, sum=0;
    
    printf("number of numbers: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        printf("write down the number: ");
        scanf("%d", &x);
        sum += x;
    }
    printf("Sum of the numbers: %d", sum);
}