#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n--- Main Menu ---\n");
        printf("1. Start New Game\n");
        printf("2. Load Game\n");
        printf("3. Settings\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Starting new game...\n");
                break;
            case 2:
                printf("Loading saved game...\n");
                break;
            case 3:
                printf("Opening settings menu...\n");
                break;
            case 4:
                printf("Exiting. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4); // Keep looping until choice is 4

    return 0;
}