#include <stdio.h>
int main() {
    int n;
    while (1) {
        printf("숫자를 입력하세요: ");
        scanf("%d", &n);
        if (n == 0) {
            printf("0은 허용되지 않습니다.\n");
            continue;
        }
        else if (n >= 11) {
            printf("그렇게 많은 별표를 출력할 수 없습니다.\n");
            break;
        }
        else {
            for (int i = 0; i < n; i++)
                printf("*");
            printf("\n");
            break;
        }
    }
    return 0;
}
