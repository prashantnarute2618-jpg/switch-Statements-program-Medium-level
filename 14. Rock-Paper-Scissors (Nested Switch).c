#include <stdio.h>

int main() {
    char p1 = 'R';
    char p2 = 'P';

    printf("Player 1: %c, Player 2: %c\n", p1, p2);

    switch (p1) {
        case 'R':
            switch (p2) {
                case 'R': printf("It's a TIE!\n"); break;
                case 'P': printf("Player 2 Wins! (Paper covers Rock)\n"); break;
                case 'S': printf("Player 1 Wins! (Rock breaks Scissors)\n"); break;
            }
            break;
        case 'P':
            switch (p2) {
                case 'R': printf("Player 1 Wins! (Paper covers Rock)\n"); break;
                case 'P': printf("It's a TIE!\n"); break;
                case 'S': printf("Player 2 Wins! (Scissors cuts Paper)\n"); break;
            }
            break;
        case 'S':
            switch (p2) {
                case 'R': printf("Player 2 Wins! (Rock breaks Scissors)\n"); break;
                case 'P': printf("Player 1 Wins! (Scissors cuts Paper)\n"); break;
                case 'S': printf("It's a TIE!\n"); break;
            }
            break;
    }
    return 0;
}