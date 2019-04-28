#include <stdio.h>
int mcd(int, int);
int main()
{
    int a, b, m;
    do {
        printf("\nEnter a,b numbers (a>=b) for Max Common Divider:");
        scanf("%d%d", &a, &b);
    } while (a<b);
    m = mcd(a,b);
    printf("\n\nMax Common Divider of %d and %d is %d\n\n", a, b, m);
    return 0;
}
int mcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return mcd(y, x%y);
}
