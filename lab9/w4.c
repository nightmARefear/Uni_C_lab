#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Simio { /* Point structure */
    float x;
    float y;
};
float mikos(struct Simio, struct Simio);
int main()
{
    struct Simio *Pol; /* Polygon as a set of points */
    int N, i, megethos;
    float per=0.0;
    printf("\nEnter a plurality of polygon peaks:");
    scanf("%d", &N);
    /* Board definition */
    megethos = N * sizeof(struct Simio);
    Pol = malloc(megethos);
    if (Pol == NULL ) {
        printf("\n\nOut of scope, terminating....\n\n");
        return -1;
    }
    /* Insertion of polygon peak points */
    for (i=0; i<N; i++) {
        printf("\nEnter coordinates of x,y of %d top:", i+1);
        scanf("%f%f", &Pol[i].x, &Pol[i].y);
    }
    /* Perimeter calculation by sum of the lengths of its sides */
    for (i=0; i<N-1; i++)
        per += mikos(Pol[i], Pol[i+1]);
    per += mikos(Pol[N-1], Pol[0]);
    printf("\n\nPerimeter =%.3f\n\n", per);
    free(Pol);
    return 0;
}
/* Length Calculation */
float mikos(struct Simio A, struct Simio B)
{
    float mik;
    mik = sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
    return mik;
}
