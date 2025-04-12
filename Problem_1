#include <stdio.h>
int main() {
    int n, i, sum = 0, count = 0;
    while (count < 3) {
        printf("숫자를 입력하세요: ");
        scanf("%d", &n);
        if (n < 0) {
            printf("음수는 허용되지 않습니다.\n");
            goto end;
        } else if (n > 100) {
            printf("너무 커요! 다시 입력하세요.\n");
            continue;
        } else if (n % 2 != 0) {
            printf("다시 입력하세요. (홀수는 안돼요!)\n");
            count++;
            continue;
        } else {
            for (i = 1; i <= n; i++) {
                if (i % 3 == 0) continue;
                sum += i;
            }
            printf("3의 배수를 제외한 1부터 %d까지의 합계는 %d입니다.\n", n, sum);
            printf("프로그램을 종료합니다.\n");
            break;
        }
    }
end:
    return 0;
}
