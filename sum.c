**
 * Author: Makhan Singh - Alwar, Rajasthan
 * Project: first-code | Day 2 - Calculator Module
 * Description: Professional calculator to perform basic arithmetic operations
 */

#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    int choice;

    printf("=== Professional Calculator ===\n");
    printf("Enter two numbers: ");
    
    // Input validation
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Error: Invalid input! Please enter numbers only.\n");
        return 1;
    }

    printf("\nChoose Operation:\n");
    printf("1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result: %d + %d = %d\n", num1, num2, add(num1, num2));
            break;
        case 2:
            printf("Result: %d - %d = %d\n", num1, num2, subtract(num1, num2));
            break;
        case 3:
            printf("Result: %d * %d = %d\n", num1, num2, multiply(num1, num2));
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                printf("Result: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
            }
            break;
        default:
            printf("Error: Invalid choice!\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}
