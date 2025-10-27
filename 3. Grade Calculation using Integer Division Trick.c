#include <stdio.h>

int main() {
    int score = 85;
    char grade;

    // score / 10 (integer division) gives 0-10
    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default: // Covers 0-5
            grade = 'F';
            break;
    }
    
    printf("Score: %d, Grade: %c\n", score, grade);
    return 0;
}