#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    double num1, num2, result;

    printf("--- Scientific Calculator ---\n");
    printf("1. Power (x^y)\n2. Square Root\n3. Sine (sin x)\n4. Logarithm (log10)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("%.2lf ^ %.2lf = %.4lf\n", num1, num2, result);
            break;
        case 2:
            printf("Enter number: ");
            scanf("%lf", &num1);
            if (num1 >= 0) {
                result = sqrt(num1);
                printf("Square root of %.2lf = %.4lf\n", num1, result);
            } else {
                printf("Error! Negative input for square root.\n");
            }
            break;
        case 3:
            printf("Enter angle in radians: ");
            scanf("%lf", &num1);
            result = sin(num1);
            printf("sin(%.2lf) = %.4lf\n", num1, result);
            break;
        case 4:
            printf("Enter number: ");
            scanf("%lf", &num1);
            if (num1 > 0) {
                result = log10(num1);
                printf("log10(%.2lf) = %.4lf\n", num1, result);
            } else {
                printf("Error! Logarithm of non-positive number.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}