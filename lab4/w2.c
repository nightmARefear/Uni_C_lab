#include <stdio.h>

int main()
{

    int number, divisor, s= 0;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    for (divisor=1; divisor<=number/2; divisor++)
        if (number % divisor == 0)
            s += divisor;
    if (s == number)
        printf("\n\nNumber %d is a perfect number\n\n", number);
    else
        printf("\n\nNumber %d is not a perfect number\n\n", number);

    return 0;
}
