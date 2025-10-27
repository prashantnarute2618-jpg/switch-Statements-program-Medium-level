#include <stdio.h>

int main() {
    int choice;
    double radius, side, area;

    do {
        printf("\nArea Calculator\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Square\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter radius: ");
                scanf("%lf", &radius);
                area = 3.14159 * radius * radius;
                printf("Area of circle: %.2lf\n", area);
                break;
            case 2:
                printf("Enter side: ");
                scanf("%lf", &side);
                area = side * side;
                printf("Area of square: %.2lf\n", area);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 3);
    
    return 0;
}