#include <stdio.h>
int main() {
    int score;
    scanf("%d", &score);
    if (score >= 90) printf("A학점입니다.\n");
    else if (score >= 80) printf("B학점입니다.\n");
    else if (score >= 70) printf("C학점입니다.\n");
    else if (score >= 60) printf("D학점입니다.\n");
    else printf("F학점입니다.\n");
    return 0;
}
