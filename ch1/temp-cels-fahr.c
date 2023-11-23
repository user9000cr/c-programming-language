#include <stdio.h>

/* print Celsius-Fahrenheit table
    for cels = 0, 20, ..., 300
*/

int main() {
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cels = lower;
    printf("CELSIUS \t FAHRENHEIT\n");
    while (cels <= upper) {
        fahr = 9.0/5.0 * cels + 32;

        printf("%3.1f\t\t%3.2f\n", cels, fahr);

        cels += step;
    }
    return 0;
}
