#include <stdio.h>
#include <string.h>
#define N 200

int main()
{

    char s[N];
    int l, i;
    int vol = 0; // vowels
    int lt = 0;  // letters

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
                vol++;
            }
        }

    printf("\n\nLetter(s) = %d", lt);
    printf("\n\nVowel(s) = %d\n\n", vol);

    return EXIT_SUCCESS;
}
