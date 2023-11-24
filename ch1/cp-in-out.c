#include <stdio.h>

int main() {
    int c, lc;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || lc == ' ') {
            putchar('\0');
        } else {
            putchar(c);
        }
    }
    return 0;
}
