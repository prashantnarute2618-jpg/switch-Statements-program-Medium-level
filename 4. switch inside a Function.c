#include <stdio.h>

// Function definition
void handleError(int errorCode) {
    printf("Error code %d: ", errorCode);
    switch (errorCode) {
        case 404:
            printf("Not Found. The resource was not found.\n");
            break;
        case 401:
            printf("Unauthorized. You are not logged in.\n");
            break;
        case 500:
            printf("Internal Server Error.\n");
            break;
        default:
            printf("An unknown error occurred.\n");
            break;
    }
}

int main() {
    handleError(404); // Function call
    handleError(500);
    handleError(100);
    return 0;
}