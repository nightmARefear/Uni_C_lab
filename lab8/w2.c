#include <stdio.h>
#define N 12
struct mon_days {
    char name[10];
    int days;
};
int main()
{
    struct mon_days convert[N] = {
        { "Jan", 31},
        { "Feb", 28},
        { "Mar", 31},
        { "Apr", 30},
        { "May", 31},
        { "Jun", 30},
        { "Jul", 31},
        { "Aug", 31},
        { "Sep", 30},
        { "Oct", 31},
        { "Nov", 30},
        { "Dec", 31}
    };
    int i;
    printf("\nMonth\t\tDays");
    printf("\n====================");
    for (i=0; i<N; i++)
        printf("\n%2d. %s\t\t %d", i+1, convert[i].name, convert[i].days);
    printf("\n\n");
    return 0;
}

