#include <stdio.h>

int main()
{

    int x;
    int hours, minutes, seconds;

    printf("\n\nSecond(s):");
    scanf("%d", &x);

    hours = x / 3600;
    minutes = (x - hours * 3600) / 60;
    seconds = x - 3600 * hours - 60 * minutes;

    printf("\n\n %d second(s) equals %d hr(s), %d min(s) and %d second(s)\n", x, hours, minutes, seconds);

    return 0;
}
