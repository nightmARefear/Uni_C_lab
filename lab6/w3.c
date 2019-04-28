#include <stdio.h>
#define N 5 /* Lines - Collumns of board */

int main()
{

    int A[N][N];
    int i, j;
    int zero = 0, notzero = 0;

    for (i=0; i<N; i++) {
        printf("\n%d elements of %d line: ", N, i+1);
        for (j=0; j<N; j++)
            scanf("%d", &A[i][j]);
    }

    for (i=0; i<N; i++) /* Zero datas */
        for (j=0; j<N; j++)
            if (A[i][j] == 0)
                zero++;
    for (i=0; i<N; i++) /* Greater than zero */
        if (A[i][i] !=0)
            notzero++;
    printf("\n\nZero datas: %d", zero);
    printf("\n\nGreater than zero datas: %d", notzero);
    printf("\n\n");

    return 0;
}
