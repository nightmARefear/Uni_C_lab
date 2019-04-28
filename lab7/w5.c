#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, counter=0;
    srand(time(NULL));
    number = rand()%50 + 1;
    printf("\n\nAI have a number aroun 1 and 50.");
    printf("\nCan u guess it?");
    do {
        printf("\n Guess:");
        scanf("%d", &guess);
        counter++;
        if (guess == number)
            printf("\n\nBingo!\n\n");
        else if (guess > number)
            printf("\n\nTry again, kiddo.");
        else
            printf("\n\nTry harder, noob.");
    } while (guess != number);
    printf("\n\%d attempt(s)", counter);
    return 0;
}
