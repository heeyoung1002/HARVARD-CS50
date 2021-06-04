#include <stdio.h>

int main(void)
{
    int i,j,n;
   
    do 
    {
        scanf("Height:%d", &n);
    }
    while (n > 8 || n < 1);


    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("#");
        }
    
    printf("\n");    
    }

    return 0;
}