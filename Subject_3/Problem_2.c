#include <stdio.h>

void add_to_total(int x) {
    static int total = 0;  
    total += x;
    printf("%d\n", total);
}

int main(void) {
    int num;
    while (1) {
        scanf("%d", &num);

        if (num == 0) break;

        add_to_total(num);
    }
    return 0;
}
