#include <stdio.h>

int main() {
    int month = 2;
    int year = 2024; // A leap year

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n");
            break;
        case 2:
            // Nested if check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("29 days (Leap Year)\n");
            } else {
                printf("28 days\n");
            }
            break;
        default:
            printf("Invalid month.\n");
            break;
    }
    return 0;
}