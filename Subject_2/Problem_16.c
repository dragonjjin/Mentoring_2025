#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        tmp = a + b;
        a = b;
        b = tmp;
    }
    return 0;
}
