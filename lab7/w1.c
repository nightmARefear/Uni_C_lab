#include <stdio.h>

float convert_miles_km(float);
int main()
{

    float miles, km;
    printf("\nMiles to km:");
    scanf("%f", &miles);
    km = convert_miles_km(miles);
    printf("\n\nkm= %.2f\n\n", km);
}

float convert_miles_km(float m)
{
    float k;
    k = m * 1.6093;
    return k;
    return 0;
}
