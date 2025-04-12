#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    scanf("%d", &n);
    if (n <= 1) isPrime = 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) printf("소수입니다.\n");
    else printf("소수가 아닙니다.\n");
    return 0;
}
