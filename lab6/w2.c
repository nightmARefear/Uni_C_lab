#include <stdio.h>
#define N 3

int main()
{

    int A[N][N], T[N][N];
    int i, j;

    for (i=0; i<N; i++) {
        printf("\n%d elements of %d line: ", N, i+1);
        for (j=0; j<N; j++)
            scanf("%d", &A[i][j]);
    }

    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            T[i][j] = A[j][i];

    printf("\n\n\n\tInverse Matrix HUEHUE ");
    printf("\n===============================");

    for (i=0; i<N; i++) {
        printf("\n");
        for (j=0; j<N; j++)
            printf("%10d", T[i][j]);
    }
    printf("\n\n");
    return 0;
}
