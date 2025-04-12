#include <stdio.h>
int main() {
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("가장 큰 수는 %d입니다.\n", max);
    return 0;
}
