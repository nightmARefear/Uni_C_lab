#include <stdio.h>

int main()
{

    int x;
    int hundreds, tens, units;

    printf("\nEnter a three-digit number:");
    scanf("%d", &x);

    hundreds = x / 100;
    tens = (x - hundreds * 100) / 10;
    units = (x - hundreds * 100) % 10;

    printf("\n\n Hundreds = %d", hundreds);
    printf("\n\n Tens = %d", tens);
    printf("\n\n Units = %d\n", units);

    return 0;
}
