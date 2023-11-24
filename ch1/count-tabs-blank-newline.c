#include <stdio.h>

int main() {
    int bc, tc, nc;
    int c;

    bc = tc = nc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            bc++;
        }
        if (c == '\t') {
            tc++;
        }
        if (c == '\n') {
            nc++;
        }
    }
    printf("Blanck count: %d \n", bc);
    printf("Tab count: %d \n", tc);
    printf("Newline count: %d \n", nc);
    return 0;
}
