#include <stdio.h>

void gugu(int dan) {
    for (int i = 1; i <= 9; ++i) {
        printf("%d X %d = %d\n", dan, i, dan * i);
    }
}

int main() {
    int dan;
    
    scanf("%d", &dan);

    gugu(dan);
    return 0;
}
