#include <stdio.h>

int main()
{

    int year;

    printf("\nYear:");
    scanf("%d", &year);

    if ( year % 400 == 0)
        printf("\n\n %d it's a leap year\n", year);
    if ( year % 4 == 0 && year % 100 != 0)
        printf("\n\n %d it's a leap year\n", year);
    else
        printf("\n\n %d it isn't a leap year\n", year);

    return 0;
}
