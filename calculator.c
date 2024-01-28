#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int pro(int a, int b);
int div(int a, int b);

int main() {
    int a, b;
    printf("Enter number: ");
    scanf("%d", &a);

    printf("Enter number: ");
    scanf("%d", &b);

    char c;
    printf("Enter operation to perform (+, -, /, *): ");
    scanf(" %c", &c); // Note the space before %c

    int ans;

    switch (c) {
        case '+':
            ans = add(a, b);
            break;
        case '-':
            ans = sub(a, b);
            break;
        case '*':
            ans = pro(a, b);
            break;
        case '/':
            ans = div(a, b);
            break;
        default:
            printf("Invalid operation\n");
            return 1; // Error code indicating abnormal termination
    }

    printf("Result: %d\n", ans);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int pro(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // Returning 0, but you can handle this error differently if you wish
    }
    return a / b;
}
