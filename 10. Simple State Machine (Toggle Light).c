#include <stdio.h>

enum State { ON, OFF };
enum Event { TOGGLE, NONE };

int main() {
    enum State currentState = OFF;
    enum Event input = TOGGLE;

    printf("Current state: OFF\n");

    switch (currentState) {
        case OFF:
            if (input == TOGGLE) {
                currentState = ON;
                printf("Event: TOGGLE -> State is now ON\n");
            }
            break;
            
        case ON:
            if (input == TOGGLE) {
                currentState = OFF;
                printf("Event: TOGGLE -> State is now OFF\n");
            }
            break;
    }
    return 0;
}