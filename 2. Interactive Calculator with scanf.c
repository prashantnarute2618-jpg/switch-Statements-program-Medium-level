#include <stdio.h>

int main() {
    char op;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Note the space before %c to catch whitespace

    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    switch (op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0)
                printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
            else
                printf("Error! Cannot divide by zero.\n");
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }
    return 0;
}