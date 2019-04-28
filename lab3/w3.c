#include <stdio.h>

int main()
{
    char grade;

    printf("\nEnter grade please (A,B,C,D,F): ");
    scanf("%c", &grade);

    switch ( grade ) {
    case 'A' :
    case 'a' :
        printf("\n\n%c Corresponds to  4\n\n", grade);
        break;
    case 'B' :
    case 'b' :
        printf("\n\n%c Corresponds to 3\n\n", grade);
        break;
    case 'C' :
    case 'c' :
        printf("\n\n%c Corresponds to 2\n\n", grade);
        break;
    case 'D' :
    case 'd' :
        printf("\n\n%c Corresponds to 1\n\n", grade);
        break;
    case 'F' :
    case 'f' :
        printf("\n\n%c Corresponds to 0\n\n", grade);
        break;
    default :
        printf("\n\nEither you entered a out of scope number or you're actually dumb\n\n");
    }

    return 0;
}
