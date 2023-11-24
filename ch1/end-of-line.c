#include <stdio.h>

int main() {
    int c = EOF;
    printf("value of EOL: %d", getchar() != EOF);
    printf("EOF %d", c);
    return 0;
}
