#include <stdio.h>

int main() {
    int mode;
    double num1, num2, result;
    char op, choice;

    printf("=== Calculator Menu ===\n");
    printf("1. Basic Arithmetic\n");
    printf("2. Power / Root Operations\n");
    printf("Enter mode (1 or 2): ");
    
    if (scanf("%d", &mode) != 1) {
        printf("Invalid mode selection.\n");
        return 1;
    }

    
    switch (mode) {
        case 1:
            printf("\n--- Basic Arithmetic ---\n");
            printf("Enter expression (e.g., 5.5 + 2): ");
            scanf("%lf %c %lf", &num1, &op, &num2);

            
            switch (op) {
                case '+':
                    result = num1 + num2;
                    printf("Result: %.2lf\n", result);
                    break;
                case '-':
                    result = num1 - num2;
                    printf("Result: %.2lf\n", result);
                    break;
                case '*':
                    result = num1 * num2;
                    printf("Result: %.2lf\n", result);
                    break;
                case '/':
                    if (num2 != 0) {
                        result = num1 / num2;
                        printf("Result: %.2lf\n", result);
                    } else {
                        printf("Error: Division by zero is undefined.\n");
                    }
                    break;
                default:
                    printf("Error: Invalid arithmetic operator '%c'.\n", op);
                    break;
            }
            break;

        case 2:
            printf("\n--- Power / Root Operations ---\n");
            printf("Select operation ('s' for Square, 'r' for Square Root): ");
            scanf(" %c", &choice);

            
            switch (choice) {
                case 's':
                case 'S':
                    printf("Enter a number: ");
                    scanf("%lf", &num1);
                    result = num1 * num1; 
                    printf("Result: %.2lf\n", result);
                    break;

                case 'r':
                case 'R':
                    printf("Enter a number: ");
                    scanf("%lf", &num1);
                    if (num1 < 0) {
                        printf("Error: Cannot calculate square root of a negative number.\n");
                    } else if (num1 == 0) {
                        printf("Result: 0.00\n");
                    } else {
                        double root = num1 / 2.0;
                        for (int i = 0; i < 20; i++) {
                            root = 0.5 * (root + (num1 / root));
                        }
                        printf("Result: %.2lf\n", root);
                    }
                    break;

                default:
                    printf("Error: Invalid operation choice '%c'.\n", choice);
                    break;
            }
            break;

        default:
            printf("Error: Invalid mode '%d'. Please select 1 or 2.\n", mode);
            break;
    }

    return 0;
}