#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    printf("%p\n", &s);
    printf("%c\n", *s);
    printf("%c\n", *(s+1));

    return 0;
}