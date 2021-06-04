#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        scanf("Height:%d", &n);
    }
    while (n > 8 || n < 1);


    for (int i= 1; i <= n; i++)
    {
        for (int j=1; j <= 2*n+2; j++)
        {
           if(i<j/2-2 || i==j/2+1 || i==j/2+2 || i>2*j)
           {
               printf(" ");
           }
           else
           {
               printf("#");
           }
        }
        printf("\n");
    }

    return 0;
}