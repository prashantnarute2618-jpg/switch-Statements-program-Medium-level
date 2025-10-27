#include <stdio.h>

// Function to calculate bonus based on tier
double getBonus(int tier, double salary) {
    double bonusRate;
    switch (tier) {
        case 1:
            bonusRate = 0.20; // 20%
            break;
        case 2:
            bonusRate = 0.10; // 10%
            break;
        case 3:
            bonusRate = 0.05; // 5%
            break;
        default:
            bonusRate = 0.01; // 1%
            break;
    }
    return salary * bonusRate;
}

int main() {
    double salary = 50000;
    int tier = 1;
    double bonus = getBonus(tier, salary);
    
    printf("Salary: $%.2f, Tier: %d\n", salary, tier);
    printf("Bonus: $%.2f\n", bonus);
    
    return 0;
}