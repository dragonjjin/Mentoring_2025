#include <stdio.h>
int main() {
    int dan, i;
    for (dan = 2; dan <= 9; dan++) {
        if (dan % 2 != 0) continue;
        for (i = 1; i <= 9; i++) {
            printf("%d x %d = %d\n", dan, i, dan * i);
            if (i == dan) break;
        }
    }
    return 0;
}
