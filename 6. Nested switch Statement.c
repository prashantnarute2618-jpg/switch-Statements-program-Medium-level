#include <stdio.h>

int main() {
    char category = 'F'; // 'F' for Food, 'D' for Drink
    int item = 2;         // 1=Pizza, 2=Burger OR 1=Coke, 2=Water

    switch (category) {
        case 'F':
            printf("Food Menu:\n");
            switch (item) {
                case 1:
                    printf("  You selected Pizza.\n");
                    break;
                case 2:
                    printf("  You selected Burger.\n");
                    break;
                default:
                    printf("  Invalid food item.\n");
                    break;
            }
            break; // Don't forget break for outer switch
            
        case 'D':
            printf("Drink Menu:\n");
            switch (item) {
                case 1:
                    printf("  You selected Coke.\n");
                    break;
                case 2:
                    printf("  You selected Water.\n");
                    break;
                default:
                    printf("  Invalid drink item.\n");
                    break;
            }
            break;
            
        default:
            printf("Invalid category.\n");
            break;
    }
    return 0;
}