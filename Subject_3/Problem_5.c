#include <stdio.h>

int main(void) {
    char buf[101];

    if (fgets(buf, sizeof(buf)) == NULL) {
        return 0;
    }

    int len = 0;
    while (buf[len] != '\0' && buf[len] != '\n') {
        ++len;
    }
    buf[len] = '\0';

    for (int i = 0; i < len; ++i) {
        if (buf[i] >= 'A' && buf[i] <= 'Z') {
            buf[i] += ('a' - 'A');
        }
        else if (buf[i] >= 'a' && buf[i] <= 'z') {
            buf[i] -= ('a' - 'A');
        }
    }

    printf("%s\n", buf);
    return 0;
}
