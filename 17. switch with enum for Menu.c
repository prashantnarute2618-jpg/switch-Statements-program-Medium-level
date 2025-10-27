#include <stdio.h>

typedef enum {
    MENU_START = 1,
    MENU_LOAD,
    MENU_SETTINGS,
    MENU_EXIT
} MainMenu;

int main() {
    MainMenu choice = MENU_LOAD;

    switch (choice) {
        case MENU_START:
            printf("Starting game...\n");
            break;
        case MENU_LOAD:
            printf("Loading game...\n");
            break;
        case MENU_SETTINGS:
            printf("Opening settings...\n");
            break;
        case MENU_EXIT:
            printf("Exiting...\n");
            break;
    }
    return 0;
}