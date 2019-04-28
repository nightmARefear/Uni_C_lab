#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,M;
    float **X, meg;
    int i, j, megethos;
    printf("\n Enter number of lines and collumns:");
    scanf("%d%d", &N, &M);
    megethos = N * sizeof(int);
    X = malloc(megethos);
    for (i=0; i<N; i++) {
        megethos = M * sizeof(float);
        X[i] = malloc(megethos);
    }
    if ( ! X) {
        printf("\n\nOut of scope, terminating...\n\n");
        return -1;
    }
    for (i=0; i<N; i++)
        for (j=0; j<M; j++) {
            printf("\nEnter %d - %d element:", i+1, j+1);
            scanf("%f", &X[i][j]);
        }
    for (i=0; i<N; i++) {
        printf("\n");
        printf("%10.2f", X[i][j]);
        for (j=0; j<M; j++)
            free(X);
        return 0;
    }
}
