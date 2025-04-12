#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch (op) {
        case '+': printf("결과: %d\n", a + b); break;
        case '-': printf("결과: %d\n", a - b); break;
        case '*': printf("결과: %d\n", a * b); break;
        case '/': printf("결과: %.1f\n", (float)a / b); break;
        default: printf("올바르지 않은 연산자입니다.\n");
    }
    return 0;
}
