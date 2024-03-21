#include <stdio.h>

float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if (num2 != 0)
        return num1 / num2;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    char op;
    float num1, num2, result;

    do {
        printf("\nSimple Calculator\n");
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1/2/3/4/5): ");
        scanf(" %c", &op);

        if (op != '5') {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            switch (op) {
                case '1':
                    result = add(num1, num2);
                    printf("Result: %f\n", result);
                    break;
                case '2':
                    result = subtract(num1, num2);
                    printf("Result: %f\n", result);
                    break;
                case '3':
                    result = multiply(num1, num2);
                    printf("Result: %f\n", result);
                    break;
                case '4':
                    result = divide(num1, num2);
                    printf("Result: %f\n", result);
                    break;
                default:
                    printf("Invalid choice\n");
            }
        }
    } while (op!= '5');

    printf("Exiting calculator...\n");

    return 0;
}
