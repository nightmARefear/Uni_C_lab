#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, t;
    float area;

    printf("\nEnter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a+b>c && a+c>b && b+c>a) {

        t = (a+b+c)/2;
        area = (float) sqrt(t*(t-a)*(t-b)*(t-c));

        printf("\nIt's a triangle!");
        printf("\nIt's area is %.2f\n\n", area);
    }
    else
        printf("\nNot a triangle :(\n");

    return 0;
}
