#include <stdio.h>

int main()
{
    int year = 1500;
    if (year % 4 == 0)
    {
        printf("It is a leap year.\n");
    }
    else
    {
        printf("It is not a leap year.\n");
    }

    return 0;
}