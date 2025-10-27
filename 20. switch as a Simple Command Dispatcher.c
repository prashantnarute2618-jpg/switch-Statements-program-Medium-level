#include <stdio.h>

void moveForward() { printf("Robot moving FORWARD.\n"); }
void stopMotor() { printf("Robot STOPPED.\n"); }
void turnLeft() { printf("Robot turning LEFT.\n"); }

// Command dispatcher function
void execute(int command) {
    switch (command) {
        case 1: // Forward
            moveForward();
            break;
        case 2: // Stop
            stopMotor();
            break;
        case 3: // Left
            turnLeft();
            break;
        default:
            printf("Unknown command!\n");
            break;
    }
}

int main() {
    execute(1);
    execute(3);
    execute(2);
    return 0;
}