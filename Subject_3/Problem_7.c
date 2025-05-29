#include <stdio.h>
#include <string.h>

int main(void) {
    char s1[1001];
    char s2[1001];

    if (gets_s(s1, sizeof(s1)) == NULL) return 0;
    int len1 = strlen(s1);
    if (len1 > 0 && s1[len1 - 1] == '\n') s1[len1 - 1] = '\0';

    if (gets_s(s2, sizeof(s2)) == NULL) return 0;
    int len2 = strlen(s2);
    if (len2 > 0 && s2[len2 - 1] == '\n') s2[len2 - 1] = '\0';

    if (strcmp(s1, s2) == 0)
        printf("같은 문자열입니다.\n");
    else
        printf("같은 문자열이 아닙니다.\n");

    return 0;
}
