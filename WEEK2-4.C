#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    scanf("Number of Scores: %d ", &n );
    
    int scores[n];
   
    for (int i=0; i<n; i++)
    {
        scores[i] = get_int("Score %i ", i +1);
    }
    
    printf("Average: TODO\n");
}