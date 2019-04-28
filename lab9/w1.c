#include <stdio.h>
void metafora(int *, int *, int *);
int main()
{
    int a, b, c;
    printf("\nEnter a, b, c:");
    scanf("%d%d%d", &a, &b, &c);
    metafora(&a, &b, &c);
    printf("\nΟι Values gon' reversed. New order is:");
    printf("\n%10d%10d%10d\n\n", a, b, c);
    return 0;
}
void metafora(int *x, int *y, int *z)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}
