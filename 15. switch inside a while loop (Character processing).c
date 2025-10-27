#include <stdio.h>

int main() {
    char ch;
    int digitCount = 0;
    int letterCount = 0;

    printf("Enter characters (q to quit):\n");

    while ((ch = getchar()) != 'q') {
        switch (ch) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                digitCount++;
                break;
            case 'a'...'z': // This range syntax is a GCC extension
            case 'A'...'Z': // (standard C would need many cases)
                letterCount++;
                break;
            case '\n': // Ignore newlines
            case ' ':  // Ignore spaces
                break;
            default:
                printf("'%c' is a special character.\n", ch);
                break;
        }
    }
    printf("\nQuitting... \n");
    printf("Digits: %d, Letters: %d\n", digitCount, letterCount);
    return 0;
}