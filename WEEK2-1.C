#include <stdio.h>

int main(void)
{
    int max;
    int index;
    int i; 
    int array[5] = { 20, 35, 40, 55, 21};
    
    index = 0;
    max = 0;
    
    for(i=0; i<5; i++)
    {
        if(max<array[i])
        {
            max = array[i];
            index = i;
        }
    }
    printf("가장 큰 값은 %d 이고, %d 번째 입니다", max, index);
    
    return 0;
}