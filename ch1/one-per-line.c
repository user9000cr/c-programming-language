#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c  == ' ') {
            printf("\n\b");
        }
        putchar(c);
    }
    return 0;
}
