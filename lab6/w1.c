#include <stdio.h>
#define N 7 /* Days */
#define M 12 /*12 hrs day */

int main()
{

    float T[N][M], ma, mi;
    int i, j;

    for (i=0; i<N; i++)
        for (j=0; j<M; j++) {

            printf("\n Temperature of day %d, 2-hr %d: ", i+1, j+1);
            scanf("%f", &T[i][j]);
        }

    printf("\n\n\nDay\tMax\tMin\n");
    printf("--------------------------\n");

    for (i=0; i<N; i++) {
        ma = T[i][0];
        mi = T[i][0];
        for (j=0; j<M; j++) {
            if (ma < T[i][j])
                ma = T[i][j];
            if (mi > T[i][j])
                mi = T[i][j];
        }

        printf("\t%3d\t%.1f\t%.1f\n", i, ma, mi);
    }

    return 0;
}
