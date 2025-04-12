#include <stdio.h>
int main() {
    int n, type;
    scanf("%d %d", &n, &type);
    if (type == 1) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) printf("*");
            printf("\n");
        }
    }
    else if (type == 2) {
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) printf("*");
            printf("\n");
        }
    }
    else if (type == 3) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) printf(" ");
            for (int j = 1; j <= i; j++) printf("*");
            printf("\n");
        }
    }
    else {
        printf("잘못된 입력입니다.\n");
    }
    return 0;
}
