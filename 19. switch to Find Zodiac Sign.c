#include <stdio.h>

int main() {
    int month = 3; // March

    switch (month) {
        case 1: printf("Aquarius (mostly)\n"); break;
        case 2: printf("Pisces (mostly)\n"); break;
        case 3: printf("Aries (mostly)\n"); break;
        case 4: printf("Taurus (mostly)\n"); break;
        case 5: printf("Gemini (mostly)\n"); break;
        case 6: printf("Cancer (mostly)\n"); break;
        case 7: printf("Leo (mostly)\n"); break;
        case 8: printf("Virgo (mostly)\n"); break;
        case 9: printf("Libra (mostly)\n"); break;
        case 10: printf("Scorpio (mostly)\n"); break;
        case 11: printf("Sagittarius (mostly)\n"); break;
        case 12: printf("Capricorn (mostly)\n"); break;
        default: printf("Invalid month.\n"); break;
    }
    return 0;
}