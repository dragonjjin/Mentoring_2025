#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("합계: %d\n", sum);
    return 0;
}
