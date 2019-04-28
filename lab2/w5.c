#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c;
    float x1, x2;
    float d;

    printf("\nTrinomial Triangle:");
    scanf("%f%f%f", &a, &b, &c);

    d = b*b-4*a*c;

    if ( d < 0 )
        printf("\nThere are no real solutions\n");
    else if (d == 0) {
        x1 = -b / (2*a);
        printf("\nΜοναδική λύση = %.2f\n", x1);
    }
    else {

        x1 = ( -b + sqrt(d)) / (2 * a);
        x2 = ( -b - sqrt(d)) / (2 * a);

        printf("\nx1=%.2f, x2=%.2f\n", x1, x2);
    }

    return 0;
}
