#include <stdio.h>
#include <math.h>

int main(void)
{
    float change; // ask a user for a change
    do // do this loop until you get a positive input from a user
    {
        change= get_float("Change owed: ");
    }
    while (change<0); // positive number condition


    int convertcents = round(change*100); // convert dollars to cents
    int coin = 0; // initial amount of coins


    while (convertcents>=25) //loop for quarters - 계속 25를 빼고 25보다 작아질 때 까지
    {
        convertcents = convertcents-25;
        coin++;
    }
    while (convertcents>=10)
    {
        convertcents = convertcents-10;
        coin++;
    }
    while (convertcents>=5)
    {
        convertcents = convertcents-5;
        coin++;
    }
    while (convertcents>=1)
    {
        convertcents = convertcents-1;
        coin++;
    }

    printf("%i\n", coin);
}

