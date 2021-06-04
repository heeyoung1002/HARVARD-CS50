#include <stdio.h>

int main(void)
{
    int n; 
    do 
    {
        scanf("Height:%d", &n);
    }
    while (n > 8 || n < 1);
    
    for (int i=0; i < n; i++)
    {
        for (int j=0; j < n; j++)
        {
            if ( i < j)
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