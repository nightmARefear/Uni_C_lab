#include <stdio.h>
#include <string.h>
#define N 200

int main()
{

    char s[N];
    int l, i, gr=0, fon=0;

    printf("\nEnter a sentence (english caps ONLY):");
    gets(s);

    l = strlen(s);

    for (i=0; i<l; i++)
        if (s[i]>='A' && s[i]<='Z')
        {
            gr++;

            switch (s[i])
            {
            case 'A':
            case 'E':
            case 'O':
            case 'I':
            case 'U':
            case 'Y':
                fon++;
            }
        }

    printf("\n\nLetter(s) = %d", gr);
    printf("\n\nVowel(s) = %d\n\n", fon);

    return 0;
}
