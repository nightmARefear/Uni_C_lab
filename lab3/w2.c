#include <stdio.h>

int main()
{

    int response;
    float feet, meters;
    float cfeet, cmeters;
    float pounds, newtons;

    printf("\nPlease choose:");
    printf("\n1 Lenth");
    printf("\n2 Mass");
    printf("\n3 Strength");
    printf("\nYour turn:");
    scanf("%d", &response);

    switch (response) {
    case 1:
        printf("\n\nFeet:");
        scanf("%f", &feet);
        meters = feet * 0.3048;
        printf("\n\n%.3f feet(s) equals %.4f meter(s)\n\n", feet, meters);
        break;
    case 2:
        printf("\nCubic feet:");
        scanf("%f", &cfeet);
        cmeters = cfeet * 0.00282;
        printf("\n%.3f Cubic feet(s) equals %.4f cubic meter(s)\n\n",
               cfeet, cmeters);
        break;
    case 3:
        printf("\nPounds :");
        scanf("%f", &pounds);
        newtons = pounds * 4.4482;
        printf("\n%.3f p is %.4f \n\n", pounds, newtons);
        break;
    default :
        printf("\nNot acceptable option\n\n");
    }

    return 0;
}
