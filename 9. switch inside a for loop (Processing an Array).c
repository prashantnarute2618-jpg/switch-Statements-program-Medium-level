#include <stdio.h>

int main() {
    int codes[] = {1, 2, 1, 3, 1, 2, 3, 3, 1};
    int n = 9;
    int countA = 0, countB = 0, countC = 0;

    for (int i = 0; i < n; i++) {
        switch (codes[i]) {
            case 1:
                //printf("Processing Type A\n");
                countA++;
                break;
            case 2:
                //printf("Processing Type B\n");
                countB++;
                break;
            case 3:
                //printf("Processing Type C\n");
                countC++;
                break;
            default:
                printf("Unknown code %d found.\n", codes[i]);
                break;
        }
    }
    
    printf("Total Type A: %d\n", countA);
    printf("Total Type B: %d\n", countB);
    printf("Total Type C: %d\n", countC);
    
    return 0;
}