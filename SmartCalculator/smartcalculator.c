#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero!\n");
        return 0;
    }
    return a % b;
}

int main() {
    int choice;
    double a, b;
    int x, y;

    while (1) {
        printf("\n====== SMART CALCULATOR ======\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", add(a, b));
                break;

            case 2:
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", subtract(a, b));
                break;

            case 3:
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", multiply(a, b));
                break;

            case 4:
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", divide(a, b));
                break;

            case 5:
                scanf("%d %d", &x, &y);
                printf("Result = %d\n", modulus(x, y));
                break;

            case 6:
                scanf("%lf %lf", &a, &b);
                printf("Result = %.2lf\n", pow(a, b));
                break;

            case 7:
                scanf("%lf", &a);
                if (a < 0)
                    printf("Invalid input\n");
                else
                    printf("Result = %.2lf\n", sqrt(a));
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}