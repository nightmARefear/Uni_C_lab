#include <stdio.h>

int main()
{

    float perimeter, area, radius, pi=3.14159;

    printf("\n\nRadius of the circle:");
    scanf("%f",&radius);

    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    printf("\n\n area = %.4f", area);
    printf("\n\n perimeter = %.4f\n\n", perimeter);

    return 0;
}
