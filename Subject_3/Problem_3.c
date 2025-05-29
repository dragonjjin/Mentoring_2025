#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int mod(int a, int b) { return a % b; }

int main(void) {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op)

    switch (op) {
    case '+':
        printf("%d\n", add(a, b));
        break;
    case '-':
        printf("%d\n", subtract(a, b));
        break;
    case '*':
        printf("%d\n", multiply(a, b));
        break;
    case '/':
        if (b == 0) {
            printf("0으로 나눌 수 없습니다\n");
            return 1;
        }
        printf("%f\n", (float)a / b);
        break;
    case '%':
        if (b == 0) {
            printf("0으로 나눌 수 없습니다\n");
            return 1;
        }
        printf("%d\n", mod(a, b));
        break; 
    }
    return 0;
}
