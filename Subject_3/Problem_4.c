#include <stdio.h>

int main() {
    int arr[10];
    int count = 0;
    int x;

    while (count < 10 && scanf("%d", &x) == 1) {
        arr[count++] = x;
        if (x == 0) break;
    }

    for (int i = count - 1; i >= 0; --i) {
        printf("%d", arr[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");
    return 0;
}
