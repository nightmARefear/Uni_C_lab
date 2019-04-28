#include <stdio.h>
#include <stdlib.h>
int search_array(int *, int, int, int);
int main()
{
    int *A, N, megethos;
    int i, x, t;
    printf("\nEnter table size:");
    scanf("%d", &N);
    /* Define board */
    megethos = N * sizeof(int);
    A = malloc(megethos);
    if (A == NULL ) {
        printf("\n\nOut of scopem terminating....\n\n");
        return -1;
    }
    /* Random register 1 --> 100 */
    srand(time(NULL));
    for (i=0; i<N; i++)
        A[i] = rand()%100+1;
    printf("\Enter element to find:");
    scanf("%d", &x);
    t = search_array(A, 0, N, x);
    if ( t == 0)
        printf("\n\nElement %d not found\n\n", x);
    else
        printf("\n\nElement %d has been found %d times\n\n", x, t);
    free(A);
    return 0;
}
int search_array(int *X, int a, int t, int s)
{
    int i, c=0;
    for (i=a; i<t; i++)
        if ( X[i] == s)
            c++;
    return c;
}
