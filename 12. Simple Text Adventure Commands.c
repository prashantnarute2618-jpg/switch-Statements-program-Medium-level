#include <stdio.h>

int main() {
    char command;
    
    printf("You are in a dark room. (n)orth, (s)outh, (l)ook\n");
    printf("Command: ");
    scanf(" %c", &command);

    switch (command) {
        case 'n':
        case 'N':
            printf("You walk north and hit a wall.\n");
            break;
        case 's':
        case 'S':
            printf("You walk south to a locked door.\n");
            break;
        case 'l':
        case 'L':
            printf("You see a small key on the floor.\n");
            break;
        default:
            printf("You can't do that.\n");
            break;
    }
    return 0;
}