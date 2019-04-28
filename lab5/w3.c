#include <stdio.h>
#include <math.h>
#define N 5

int main()
{

    float V[N], nor = 0.0;
    int i;

    for (i=0; i<N; i++) {
        printf("\nEnter: ", i+1);
        scanf("%f", &V[i]);
    }

    for (i=0; i<N; i++)
        nor += pow(V[i], 2);
    nor = sqrt(nor);
    printf("\n\nThe norm of V is %.5f\n\n", nor);

    return 0;
}
