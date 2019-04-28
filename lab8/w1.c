#include <stdio.h>
struct date {
    int month;
    int day;
    int year;
};
int dif_days(struct date, struct date);
int main()
{
    struct date a, b;
    int dif;
    printf("\nGib a date (mm, dd, yyyy):");
    scanf("%d%d%d", &a.month, &a.day, &a.year);
    printf("\nGib a future date (mm, dd, yyyy):");
    scanf("%d%d%d", &b.month, &b.day, &b.year);
    dif = dif_days(a, b);
    printf("\nΗThe difference (in days) between these two dates is:%d\n\n", dif);
}
int dif_days(struct date X, struct date Y)
{
    int d;
    if (Y.day < X.day) {
        Y.day += 30;
        Y.month --;
    }
    if (Y.month < X.month) {
        Y.month +=12;
        Y.year --;
    }
    d = (Y.year-X.year)*360;
    d += (Y.month-X.month)*30;
    d += Y.day-X.day;

    return d;
    return 0;
}
