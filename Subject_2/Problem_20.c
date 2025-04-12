#include <stdio.h>
int main() {
    int num, even = 0, odd = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) even++;
        else odd++;
    }
    printf("짝수: %d, 홀수: %d\n", even, odd);
    return 0;
}
