#include <stdio.h>
int main() {
    int num, sum = 0;
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        sum += num;
    }
    printf("총합: %d\n", sum);
    return 0;
}
