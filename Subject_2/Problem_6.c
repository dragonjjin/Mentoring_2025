#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0) printf("짝수입니다.\n");
    else printf("홀수입니다.\n");
    return 0;
}
