#include <stdio.h>

int main() {
    int num = -10;

    // (num > 0) evaluates to 1 (true) or 0 (false)
    switch (num > 0) {
        case 1:
            printf("%d is positive.\n", num);
            break;
        case 0:
            // We need a nested if to check for zero
            if (num == 0)
                printf("Number is Zero.\n");
            else
                printf("%d is negative.\n", num);
            break;
    }
    return 0;
}