#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1001];
    char from, to;

    gets_s(str, sizeof(str));

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    scanf(" %c %c", &from, &to);

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == from) {
            str[i] = to;
        }
    }

    printf("%s\n", str);
    return 0;
}