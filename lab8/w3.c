#include <stdio.h>
#define N 3
struct country {
    char name[20];
    int popul;
    char capital[20];
};
int main()
{
    struct country C[N];
    int i, max_index;
    for (i=0; i<N; i++) {
        printf("\nEnter name, population and capital of %d country: ", i+1);
        scanf("%s%d%s", &C[i].name, &C[i].popul, &C[i].capital);
    }
    max_index = 0;
    for (i=1; i<N; i++)
        if (C[i].popul > C[max_index].popul)
            max_index = i;
    printf("\n\nBiggest(given) country: %s", C[max_index].name);
    printf("\n\nPopulation:%d", C[max_index].popul);
    printf("\n\nCapital: %s\n\n", C[max_index].capital);
    return 0;
}

