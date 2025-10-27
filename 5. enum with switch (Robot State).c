#include <stdio.h>

// Enum defines a set of named integer constants
enum RobotState { IDLE = 1, ACTIVE, CHARGING, ERROR };

int main() {
    enum RobotState currentState = ACTIVE;

    switch (currentState) {
        case IDLE:
            printf("Robot is in IDLE mode.\n");
            break;
        case ACTIVE:
            printf("Robot is in ACTIVE mode.\n");
            break;
        case CHARGING:
            printf("Robot is CHARGING.\n");
            break;
        case ERROR:
            printf("Robot is in ERROR mode! Check system.\n");
            break;
        default:
            printf("Unknown state.\n");
            break;
    }
    return 0;
}