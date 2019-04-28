#include <stdio.h>

int main()
{

    int a, b, number, i, j;
    int counter = 0, isprime;

    printf("\na:");
    scanf("%d", &a);
    printf("\nb:");
    scanf("%d", &b);
    printf("\n\nPrimary Numbers: ");

    for (i=a; i<=b; i++) {
        number = i;
        j = 2;
        isprime = 1;

        while (j<number && isprime == 1) {
            if ( number % j == 0)
                isprime = 0;
            j++;
        }

        if (isprime == 1) {
            printf("%d\t", number);
            counter++;
        }
    }

    printf("\n\nPrimary Numbers: %d\n\n", counter);

    return 0;
}
