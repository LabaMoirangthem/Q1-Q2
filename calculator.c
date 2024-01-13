#include <stdio.h>

// Function to add two numbers
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to subtract two numbers
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to multiply two numbers
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to calculate the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    float num1, num2;
    char operator;

    // Get input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, lcm): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leading whitespace

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
            break;
        case 'l':
        case 'L':
            // Ensure both numbers are integers before calculating LCM
            if (num1 == (int)num1 && num2 == (int)num2) {
                printf("LCM of %.0f and %.0f = %d\n", num1, num2, lcm((int)num1, (int)num2));
            } else {
                printf("Error: LCM can only be calculated for integers\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
