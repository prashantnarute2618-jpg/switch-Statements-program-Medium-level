#include <stdio.h>

int main() {
    char answer;
    
    printf("What is the capital of France?\n");
    printf("a) London\n");
    printf("b) Paris\n");
    printf("c) Berlin\n");
    printf("Enter your answer (a, b, or c): ");
    scanf(" %c", &answer);

    switch (answer) {
        case 'a':
            printf("Incorrect. London is the capital of the UK.\n");
            break;
        case 'b':
        case 'B':
            printf("Correct! Paris is the capital of France.\n");
            break;
        case 'c':
            printf("Incorrect. Berlin is the capital of Germany.\n");
            break;
        default:
            printf("That's not one of the options.\n");
            break;
    }
    return 0;
}