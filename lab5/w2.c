#include <stdio.h>
#define N 5
#define M 3

int main()
{

    int a[N], b[M], c[N+M];
    int i;

    for (i=0; i<N; i++) {
        printf("\nNumber %d of element a: ", i+1);
        scanf("%d", &a[i]);
    }

    for (i=0; i<M; i++) {
        printf("\nNumber %d of element b: ", i+1);
        scanf("%d", &b[i]);
    }

    for (i=0; i<N; i++) /* Input of first board */
        c[i] = a[i];

    for (i=N; i<N+M; i++) /* Input of second board */
        c[i] = b[i-N];

    for (i=0; i<N+M; i++)
        printf("%5d", c[i]);
    printf("\n\n");
    return 0;
}
