#include <stdio.h>
#include <math.h>

int main()
{

    int x1,y1,x2,y2;
    float d;

    printf("\n Coordinates xz:");
    scanf("%d%d", &x1, &y1);
    printf("\n Coordinates yz:");
    scanf("%d%d", &x2, &y2);

    d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    printf("\nDistance = %.2f\n", d);

    return 0;
}
